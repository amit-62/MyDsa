// https://leetcode.com/problems/coin-change/

#include<bits/stdc++.h>
using namespace std;

const int N=1e4+10;
int dp[N];


int ctCoin(int amount, vector<int>& coins){
	if(amount==0) return 0;
	if(dp[amount]!= -1) return dp[amount];
	int ans= INT_MAX;
	for(auto coin : coins){
		if(amount-coin>=0)
			ans=min(ans +0ll, ctCoin(amount-coin, coins)+1ll);
	}

	return dp[amount] = ans;
}

int coinChange(vector<int>& coins, int amount) {
	memset(dp, -1, sizeof(dp));
	int ans=ctCoin(amount, coins);
	return ans==INT_MAX ? -1 : ans;
        
}

int main()
{   
	int amt, n;
	cin>>amt>>n;
	vector<int> coins(n);
	for(int i=0; i<n; i++){
		cin>>coins[i];
	}

	cout<<coinChange(coins,amt);
	return 0;
}