//leet code quest of phone pad in C++

#include<bits/stdc++.h>
using namespace std;

void PhPad(string p, string up){
	if(up.size()==0){
		cout<< p<<endl ;
		return;
	}

	int digit = up[0] - '0';

	for(int i=(digit - 1)*3; i< digit*3; i++){
		char ch = (char)('a'+i);
		PhPad(p+ch, up.substr(1));
	}
}
vector<string> v;
void PhPadV(string p, string up){
	if(up.size()==0){
		// cout<< p<<endl ;
		// vector<string> v;
		v.push_back(p);
		return;
	}

	int digit = up[0] - '0';

	for(int i=(digit - 1)*3; i< digit*3; i++){
		char ch = (char)('a'+i);
		PhPadV(p+ch, up.substr(1));
	}
}

int main()
{   
	string s, a="";
	cin>>s;
	// PhPad(a, s);
	// vector<string> v1;
	PhPadV(a,s);
	for(auto it : v){
		cout<<it<<' ';
	}
	return 0;
}
