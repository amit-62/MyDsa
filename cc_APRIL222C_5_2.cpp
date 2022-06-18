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
		vector<pair<ll,ll>> vect;
		for(int i=0; i<n; i++){
			ll x,y;
			cin>>x>>y;
			vect.push_back( make_pair(x,y) );
		}
		ll ans=0;
		for(int i=0; i<n; i++){
			map<pair<ll,ll>, ll> mp, tem;
			ll x=0, y=0;
			for(int j=0; j<n; j++){
				if(i==j)  continue;

				ll dx= vect[i].first-vect[j].first;
				ll dy = vect[i].second- vect[j].second;
				if(dx==0) x++;
				else if(dy == 0) y++;
				else{
					ll k= __gcd(dy,dx);
					mp[make_pair(dx/k, dy/k)]++;
				}
				
			}
			cout<<"map"<<endl;
			for(auto i : mp){
				cout<<i.first.first<<" "<<i.first.second<<" "<<i.second<<endl;
			}
			tem=mp;
			int z=0;
			for(auto i:mp){
				z+= tem[make_pair(i.first.second, i.first.first*-1)]*i.second;
				z+= tem[make_pair(i.first.second*-1, i.first.first)]*i.second;
			}
			cout<<"tem"<<endl;
			for(auto i : tem){
				cout<<i.first.second<<" "<<i.first.first<<" "<<i.second<<endl;
			}

			z/=2;
			ans += (x*y)+z;

		}
		cout<<ans<<endl;
	}
	return 0;
}




