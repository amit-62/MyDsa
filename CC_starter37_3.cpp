// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n,m,a;
		cin>>n>>m>>a;
		if(m==a) cout<<0<<endl;
		else{
			// if(n%a==0) cout<<n-(n/a)<<endl;
			// else cout<<n-(n/a+1)<<endl;
			cout<<n*a/(a+1)<<endl;
		}
		
	}
	return 0;
}




