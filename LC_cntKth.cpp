// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

int dp[3001];
int calcKth(int n){
	int n_org=n;
	int cnt=0;
	while(n!=1){
		if(dp[n]!=-1){
			return dp[n_org]=cnt + dp[n];
		}

		if(n%2==0){
			n=n/2;
		}
		else{
			n=n*3+1;
		}
		cnt++;

	}
	return dp[n_org]=cnt;
}

int getKth(int lo, int hi, int k) {
	vector<pair<int, int>> v;
	memset(dp, -1, sizeof(dp));
	for(int i=lo; i<=hi; i++){
		int cnt=calcKth(i);
		v.push_back({cnt,i});
	} 
	sort(v.begin(),v.end());

	return v[k-1].second;
	       
}

int main()
{   
	int lo=12, hi=15, k=2;
	cout<<getKth(12,15,2);
	return 0;
}




