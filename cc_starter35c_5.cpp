// https://www.codechef.com/START35C/problems/CFXORB

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int x;
		cin>>x;
		map<int,long long> m;
		for(int i=0; i<n; i++){
			a[i]= a[i]&x;
			m[a[i]]++;
		}
		long long ans=0;
		for(auto it: m){
			// cout<<it.first<<' '<<it.second<<endl;
			long long sqr= it.second*it.second;
			ans+=sqr;
		}
		cout<<ans<<endl;
	}
	return 0;
}




