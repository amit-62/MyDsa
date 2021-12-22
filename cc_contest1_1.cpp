#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int q;
	cin>>q;
	while(q--){
	  	int x,y,p,q;
	  	cin>>x>>y>>p>>q;
	  	int a=x+p*10;
	  	int b=y+q*10;
	  	if(a<b) cout<<"Chef"<<endl;
	  	else if(a>b) cout<<"Chefina"<<endl;
	  	else cout<<"Draw"<<endl;
	}
	return 0;
}
