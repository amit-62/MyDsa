//https://codeforces.com/problemset/problem/525/A

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	cin>> n;
	cin >> s;
	char a[n-1],b[n-1];
	int x=0;
	for(int i=0; i< s.size(); i+=2){
		for(int j= i+1; j< s.size(); j+=2){
			if(s[i]==tolower(s[j])){
				x++;
				break;
			}
		}
	}	
		cout<<(n-1)-x;
	return 0;
}