// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b){
	return a.second<b.second;
}

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int r;
		cin>>r;
		vector<int> sp(n), cb(n);
		for(int i=0; i<n; i++){
			cin>>sp[i];
		}
		for(int i=0; i<n; i++){
			cin>>cb[i];
		}
		vector<pair<pair<int,int>,int>> v;
		for(int i=0; i<n; i++){
			v.push_back( make_pair(make_pair(sp[i],cb[i]),sp[i]-cb[i]) );
		}
		sort(v.begin(), v.end(), cmp);
		// for(auto it : v){
		// 	cout<<it.first.first<<" "<<it.first.second<<" "<<it.second<<endl;
		// }
		int ans=0;
		for(int i=0; i<n; i++){
			int s=v[i].first.first;
			int c=v[i].first.second;
			int e=v[i].second;

			if(s<=r){
				int x=(r-s)+e;
				// r=r-x;
				int ct=x/e;
				r=r-(ct*e);
				ans+=ct;
			}
			else continue;
		}
		cout<<ans<<endl;
	}
	return 0;
}




