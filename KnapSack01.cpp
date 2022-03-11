// 0-1 knapsack problem

#include<bits/stdc++.h>
using namespace std;

int wt[110], val[200];
int dp[110][100010];

int fndMax(int index, int wt_lft){
	if(wt_lft==0) return 0;
	if(index<0) return 0;

	if(dp[index][wt_lft]!= -1) return dp[index][wt_lft];
	//when index is not considered..
	int ans=fndMax(index-1, wt_lft);

	//index is cosidered..
	if(wt_lft-wt[index]>=0)
		ans= max(ans, fndMax(index-1, wt_lft-wt[index])+val[index]);

	return dp[index][wt_lft]=ans;
}

int main()
{   
	memset(dp, -1, sizeof(dp));
	int n, mxwt;
	cin>>n>>mxwt;
	for(int i=0; i<n; i++){
    	cin>>wt[i]>>val[i];
	}
	cout<<fndMax(n-1, mxwt);
	return 0;
}




