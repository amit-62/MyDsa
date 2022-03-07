// https://atcoder.jp/contests/dp/tasks/dp_a

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int height[N];
int dp[N];

int func(int i, int k){
	if(i==0) return 0;
	if(dp[i]!=-1) return dp[i]; //dynamic approach
	int cost=INT_MAX;
	//brute force approach
	for(int j=1; j<=k; j++){
		if(i-j>=0)
			cost = min(cost, func(i-j,k)+abs(height[i]-height[i-j]));
	}

	return dp[i]=cost;
}

int main()
{   
	memset(dp, -1, sizeof(dp));
	int n, k;
	cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>height[i];

	}
	cout<<func(n-1,k);
	return 0;
}