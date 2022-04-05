// https://leetcode.com/problems/count-sorted-vowel-strings/

#include<bits/stdc++.h>
using namespace std;

int countVowelStrings(int n) {
	int a=1, e=1, i=1, o=1, u=1;
	for(int j=2; j<=n; j++){
		a=a+e+i+o+u;
		e=e+i+o+u;
		i=i+o+u;
		o=o+u;
		u=u;
	} 
	return a+e+i+o+u;					        
}

int main()
{   
	int n;
	cin>>n;
	cout<<countVowelStrings(n);
	return 0;
}




