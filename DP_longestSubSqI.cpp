// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
// vector<int> a[N];
int dp[N];
int lis(int i, vector<int> &a){
	if(dp[i]!= -1) return dp[i];
	int ans=1;
	for(int j=0; j<i; j++){
		if(a[i]>a[j]){
			ans=max(ans, lis(j,a)+1);
		}
	}
	return ans;
}
int lengthOfLIS(vector<int>& a) {
	memset(dp, -1, sizeof(dp));
	int ans=0;
	for(int i=0; i< a.size(); i++){
		ans=max(ans, lis(i,a));
	}  

	return ans; 	     
}

int main()
{   
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<lengthOfLIS(a);

	return 0;
}