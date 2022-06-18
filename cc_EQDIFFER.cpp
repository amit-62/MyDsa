// https://www.codechef.com/problems/EQDIFFER

#include<bits/stdc++.h>
using namespace std;


int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n; 
		cin>>n;
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		if(n==1){
			cout<<0<<endl;
		}
		else{
			map<int,int> mp;
			for(int i=0; i<n; i++){
				mp[a[i]]++;
			}
			int ans=n-2;
			for(auto it: mp){
				ans=min(ans, (n-it.second));
			}

			// int x= n-mp.begin().second;
			cout<<ans<<endl;
		}
	}
	return 0;
}




