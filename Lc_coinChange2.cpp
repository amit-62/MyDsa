// https://leetcode.com/problems/coin-change-2/submissions/

#include<bits/stdc++.h>
using namespace std;

const int N=1e3+10;
int dp[300][N];


int ctCoin(int ind, int amount, vector<int>& coins){
	if(amount==0) {
		return 1;
	}
	if(ind<0) return 0;
	if(dp[ind][amount]!= -1) return dp[ind][amount];
	int ans= 0;

	for(int cnt_amt=0; cnt_amt<=amount; cnt_amt+=coins[ind] ){
		ans += ctCoin(ind-1, amount-cnt_amt, coins);
	}

	return dp[ind][amount]=ans;
	
}

int coinChange(vector<int>& coins, int amount) {
	memset(dp, -1, sizeof(dp));
	int ct=ctCoin(coins.size()-1, amount, coins);
	return ct;
        
}

int main()
{   
	int amt, n;
	cin>>amt>>n;
	vector<int> coins(n);
	for(int i=0; i<n; i++){
		cin>>coins[i];
	}

	cout<<coinChange(coins, amt);
	return 0;
}