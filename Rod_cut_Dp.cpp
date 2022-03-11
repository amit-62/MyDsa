// Rod Cutting DP problem

#include<bits/stdc++.h>
using namespace std;

int dp[10010];

int func(int len, vector<int> &prices){
	if(len==0) return 0;
	if(dp[len]!= -1) return dp[len];
	int ans=0;
	for(int len_to_cut=1; len_to_cut<=prices.size(); len_to_cut++){
		if(len-len_to_cut>=0){
			ans=max(ans, func(len-len_to_cut, prices)+prices[len_to_cut-1]);
		}
	}
	return dp[len]=ans;
}

int main()
{   
	memset(dp, -1, sizeof(dp));
	int n;
	cin>>n;
	vector<int> prices(n);
	for(int i=0; i<n; i++){
		cin>>prices[i];
	}
	cout<<func(n, prices);
	return 0;
}




