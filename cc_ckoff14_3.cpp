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
		for(int i=0; i<n; i++){
			cin>>v[i];
		}
		sort(v.begin(), v.end());
		int ct=0;
		for(int i=1; i<n-1; i++){
			int x=v[i]-v[i-1];
			int y=v[i+1]-v[i];
			if(x==2*y || y==2*x){
				ct++;
			}
			else {
				cout<<"NO"<<endl;
				break;
			}
		}
		if(ct==n-2) cout<<"YES"<<endl;

	}
	return 0;
}




