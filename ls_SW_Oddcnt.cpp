// https://leetcode.com/problems/count-number-of-nice-subarrays/

#include<bits/stdc++.h>
using namespace std;

int numberOfSubarrays(vector<int>& nums, int k) {
	vector<int> v;
	for(int k=0; k<nums.size(); k++){
		if(nums[k]%2 != 0){
			v.push_back(k);
		}
	}
	int i=0;
	int j=0;
	int cnt=0;
	while(j<v.size()){
		if(j-i+1<k){
			j++;
		}
		if(j-i+1==k){
			int x,y;
			if(v[i]==0) x=1;
			else if (i==0) x= v[i]+1;
			else x= v[i]-v[i-1];

			if(v[j]==nums.size()-1) y=1;
			if(j==v.size()-1) y=nums.size()-v[j];
			else y=v[j+1] - v[j];

			cnt += x*y;
			i++;
			j++;
		}
	} 
	return cnt;           
}

int main()
{   
	vector<int> nums={2,4,6};
	// longestSubarray(nums);
	cout<<numberOfSubarrays(nums,3);
	return 0;
}