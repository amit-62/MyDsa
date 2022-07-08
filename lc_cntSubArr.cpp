// https://leetcode.com/problems/subarrays-with-k-different-integers/

#include<bits/stdc++.h>
using namespace std;

int subarraysWithKDistinct(vector<int>& nums, int k) {
	int i=0;
	int j=0;
	int ans=0;
	if(nums.size()==0) return 0;
	unordered_map<int, int> m;
	while(j<nums.size()){
		m[nums[j]]++;
		if(m.size()<k){
			j++;
		}
		if(m.size()==k){
			ans += 1;
			j++;
		}
		else if(m.size()>k){
			while(m.size()>k){
				m[nums[i]]--;
				// if(m.size()==k) ans+=1;
				if(m[nums[i]]==0) m.erase(nums[i]);
				if(m.size()==k) ans+=1;
				i++;
			}
			j++;
		}
	}
	return ans;        
}

int main()
{   
	vector<int> nums = {1,2,1,2,3};
	cout<<subarraysWithKDistinct(nums,2);
	return 0;
}