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
		vector<int> v(n);
		map<int,int> m;
		for(int i=0; i<n; i++){
			cin>>v[i];
			m[v[i]]++;
		}
		for(auto it:m){
			if (it.second>1) cout<<"NO"<<endl;
		}
		cout<<"YES"<<endl;
		
	}
	return 0;
}




