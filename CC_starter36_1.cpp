// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int x, y, z;
		cin>>x>>y>>z;
		if(z%x==0 && z%y==0) cout<<"ANY";
		else if(z%x==0) cout<<"CHICKEN";
		else if(z%y==0) cout<<"DUCK";
		else cout<<"NONE";
		cout<<endl;
	}
	return 0;
}




