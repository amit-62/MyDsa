// https://leetcode.com/problems/partition-equal-subset-sum/

#include<bits/stdc++.h>
using namespace std;

int dp[100][100000];
bool func(int i, int sum, vector<int> &nums){
	if(sum==0) return true;
	if(i<0) return false;
	if(dp[i][sum]!=-1) return dp[i][sum];
	bool isPosssible = func(i-1, sum, nums);
	if(sum-nums[i]>=0)
		isPosssible |= func(i-1, sum-nums[i], nums);
	return dp[i][sum] = isPosssible;
}

bool canPartition(vector<int>& nums) {
	memset(dp, -1, sizeof(dp));
	int sum = accumulate(nums.begin(), nums.end(),0);
	if(sum%2!=0) return false;
	sum = sum/2;

	return func(nums.size()-1, sum, nums);

}

int main()
{   

	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; i++){
		cin>>nums[i];
	}

	cout<<canPartition(nums);
	return 0;
}




