// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		if(x==1 || x==2) cout<<1<<endl;
		else if(x==3) cout<<2<<endl;
		else cout<<x<<endl;
	}
	return 0;
}




