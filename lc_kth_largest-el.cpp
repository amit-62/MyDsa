// 

#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
	sort(nums.begin(), nums.end());
	int x=nums.size();
	return nums[x-k];
}


int main()
{   
	// int n; cin>>n;
	vector<int> nums={3,2,3,1,2,4,5,5,6};
	// for(int i=0; i<n; i++){
	// 	cin>>nums[i];
	// }

	cout<<findKthLargest(nums, 4);
	// map<int,int> mp;
	// for(int i=0; i<nums.size(); i++){
	// 	mp[nums[i]]++;
	// }
	// vector<int> v;
	// for(auto it: mp){
	// 	v.push_back(it.first);
	// }
	// cout<<v[4];  

	return 0;
}




