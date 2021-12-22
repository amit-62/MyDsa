//https://leetcode.com/problems/k-th-symbol-in-grammar/

#include<bits/stdc++.h>
using namespace std;

int kthGrammar(int n, int k) {
	if(n==1 && k==1){
		return 0;
	}      
	if(k<=(1<<(n-2))){
		return kthGrammar(n-1, k);
	}
	else{
		return !kthGrammar(n-1, k-(1<<(n-2)));
	}
}

int main()
{   	
	int n,k;
	cin>>n>>k;
	// cout<<nthGrammar(n)<<endl;
	cout<<kthGrammar(n,k);
	return 0;
}