// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;
int dp[101][10010];

int solve(int e, int f){
	if(f==0 || f==1){
		return f;
	}
	if(e==1){
		return f;
	}
	if(dp[e][f]!=-1) return dp[e][f];
	int mn=INT_MAX;
	int lo=1, hi=f;
	while(hi>=lo){
		int k=(hi+lo)/2;  //assume k as mid
		int low, high;
		if(dp[e-1][k-1]!=-1){
			low=dp[e-1][k-1];
		}
		else{
			low = solve(e-1, k-1);
			dp[e-1][k-1]=low;
		}

		if(dp[e][f-k]!=-1){
			high=dp[e][f-k];
		}
		else{
			high=solve(e,f-k);
			dp[e][f-k]=high;
		}
		int temp = 1 + max(low, high);

		if(low<high){
			lo=k+1;
		}
		else{
			hi=k-1;
		}
		mn= min(mn, temp);
	}

	return dp[e][f]=mn;
}
int superEggDrop(int k, int n) {
	memset(dp, -1, sizeof(dp));
	return solve(k,n);        
}

int main()
{   
	memset(dp, -1, sizeof(dp));
	int f, e;
	cin>>f>>e;
	cout<<superEggDrop(e,f);
	return 0;
}