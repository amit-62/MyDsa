//Finding factorial of big number..

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int fact=1;
		for(int i=1; i<=n; ++i){
			fact=fact*i;
		}
		cout<<fact<<endl;
		int ct=0;
		while(fact%10==0){
			ct++;
			fact=fact/10;
		}
		cout<<ct;
	}
	return 0;
}
