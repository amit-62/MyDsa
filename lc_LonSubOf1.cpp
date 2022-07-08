// https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/
#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& nums) {
	int i=0;
	int j=0;
	int sum=0, ans=INT_MIN;
	unordered_map<int, int> m;
	while(j<nums.size()){
		m[nums[j]]++;
		if(m[0]==0){
			ans=m[1]-1;
			j++;
		}
		else if(m[0]==1){
			ans=max(m[1],ans);
			j++;
		}
		// else if(m[0]==1){
		// 	ans=max(m[1],ans);
		// 	j++;
		// }
		else if(m[0]>1){
			while(m[0]>1){
				m[nums[i]]--;
				i++;
			}
			j++;
		}

	}	
	return ans;        
}

int main()
{   
	vector<int> nums={1,1,0,0,1,1,1,0,1};
	// longestSubarray(nums);
	cout<<longestSubarray(nums);
	return 0;
}