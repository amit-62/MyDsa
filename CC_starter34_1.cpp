// https://www.codechef.com/START34C/problems/TRUESCORE

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(c>=a && d>=b){
			cout<<"POSSIBLE"<<endl;
		}
		else cout<<"IMPOSSIBLE"<<endl;
	}
	return 0;
}




