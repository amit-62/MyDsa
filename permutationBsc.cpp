// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

void Permtn(string p, string up){
	if(up.size()==0){
		cout<< p<<endl ;
		return;
	}

	int n = p.size();
	char ch = up[0];
	for(int i=0; i<=n; ++i){
		string f= p.substr(0,i);
		string s= p.substr(i,n);
		Permtn(f+ch+s, up.substr(1));
	}
}



int main()
{   
	string s, a="";
	cin>>s;
	Permtn(a, s);
	return 0;
}
