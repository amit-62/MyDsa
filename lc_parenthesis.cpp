// https://leetcode.com/problems/generate-parentheses/

#include<bits/stdc++.h>
using namespace std;

vector<string> valid;

void generate(string &s, int open, int close){
	cout<<s<<endl;
	if(open==0 && close==0){
		valid.push_back(s);
		return ;
	}

	if(open>0){
		s.push_back('(');
		cout<<'a'<<endl;
		generate(s, open-1, close);
		s.pop_back();
		cout<<1<<s<<endl;
	}

	if(close>0){
		if(open<close){
			s.push_back(')');
			cout<<'b'<<endl;
			generate(s, open, close-1);
			s.pop_back();
			cout<<2<<s<<endl;
		}
	}
}

int main()
{   
	int n;
	cin>>n;
	string s;
	generate(s,n,n);
	for(auto it:valid){
		cout<<it<<endl;
	}
	return 0;
}