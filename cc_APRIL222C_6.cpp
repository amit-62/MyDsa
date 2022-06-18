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
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i]%2;
		}
		int co=0, ce=0;
		for(int i=0; i<n; i++){
			if(a[i]==1) co++;
			else ce++;
		}
		if(ce==n) cout<<1<<endl;
		else cout<<co<<endl;


	}
	return 0;
}




