// generating subsequence.

#include<bits/stdc++.h>
using namespace std;

void SubSeq(string p, string up){
	if(up.size()==0){
		cout<< p<<endl ;
		return;
	}

	char ch = up[0];
	SubSeq(p, up.substr(1));
	SubSeq(p+ch, up.substr(1));
}

int main()
{   
	string s, a="";
	cin>>s;
	SubSeq(a, s);
	return 0;
}
