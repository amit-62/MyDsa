//https://leetcode.com/problems/find-the-duplicate-number/

#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	// int ans=0;
	for(int i=0; i<nums.size(); i++){
		if((nums[i]^nums[i+1])==0){
			return nums[i];
			break;
		}
	}
	        
}

int main()
{   
	int n;
	cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	// sort(v, )
	// for(int i=0; i<nums.size(); i++){
	// 	if(nums[i]^nums[i+1]){
	// 		return nums[i];
	// 		break;
	// 	}
	// }
	cout<<findDuplicate(v);
	return 0;
}