// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		map<int,int> m;
		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			m[x]++;
		}
		vector<pair<int,int>> v;
		for(auto it:m){
			v.push_back(make_pair(it.second, it.first));
		}
		sort(v.begin(),v.end());
		// for(auto it :v){
		// 	cout<<it.first<<" "<<it.second<<endl;
		// }

		int s=v.size();

		if(v[s-1].first==v[s-2].first) cout<<"CONFUSED"<<endl;
		else cout<<v[s-1].second<<endl;
	}
	return 0;
}




