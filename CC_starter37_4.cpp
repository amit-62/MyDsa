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

		if(m[1]>=m[0]) cout<<1<<endl;
		else cout<<0<<endl;

		
	}
	return 0;
}




