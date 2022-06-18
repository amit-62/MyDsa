// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<ll> v(n);
		for(ll i=0; i<n; i++){
			cin>>v[i];
		}
		vector<ll> ans;
		// ans.push_back(v[0]);
		for(ll i=1; i<n; i++){
			ll t=v[i];
			auto x=upper_bound(ans.begin(), ans.end(),t);
			if(x==ans.end()){
				ans.push_back(t);
			}
			else{
				*x=t;
			}
		}
		ll s=ans.size();
		cout<<s;
		for(ll i=0; i<s; i++){
			cout<<" "<<ans[i];
		}
		cout<<'\n';
		
	}
	return 0;
}




