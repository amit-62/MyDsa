// https://www.codechef.com/APRIL222C/problems/SST

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int f,s;
		cin>>f>>s;
		f=f*10;
		s=s*5;
		if(f>s) cout<<"FIRST"<<endl;
		else if(s>f) cout<<"SECOND"<<endl;
		else cout<<"ANY"<<endl;	
	}
	return 0;
}




