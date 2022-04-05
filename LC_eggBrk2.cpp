// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;
int dp[1001][5];
int solve(int e, int f){
	if(f==0 || f==1){
		return f;
	}
	if(e==1){
		return f;
	}
	if(dp[f][e]!=-1) return dp[f][e];
	int mn=INT_MAX;
	for(int k=1; k<=f; k++){
		int temp = 1 + max(solve(e-1, k-1), solve(e, f-k));
		mn= min(mn, temp);
	}

	return dp[f][e]=mn;
}

int twoEggDrop(int n) {
	memset(dp, -1, sizeof(dp));
	return solve(2,n);        
}

int main()
{   
	int f;
	cin>>f;
	cout<<twoEggDrop(f);
	return 0;
}
