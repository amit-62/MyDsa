// 0-1 knapsack problem

#include<bits/stdc++.h>
using namespace std;

int wt[110], val[200];
long long dp[110][100010];

long long fndMax(int index, int val_lft){
	if(val_lft==0) return 0;
	if(index<0) return 1e15;
	if(dp[index][val_lft]!=-1) return dp[index][val_lft];
	long long ans=fndMax(index-1, val_lft);

	if(val_lft-val[index]>=0)
		ans = min(ans,fndMax(index-1, val_lft-val[index]) + wt[index]);

	return dp[index][val_lft]=ans;
}

int main()
{   
	memset(dp, -1, sizeof(dp));
	int n, mxwt;
	cin>>n>>mxwt;
	for(int i=0; i<n; i++){
    	cin>>wt[i]>>val[i];
	}
	int max_val=1e5;

	for(int i=max_val; i>=0; i--){
		if(fndMax(n-1, i)<=mxwt){
			cout<<i<<endl;
			break;
		}
	}


	return 0;
}




