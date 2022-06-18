// https://www.codechef.com/problems/ANDSUBAR

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int  l=log2(n); //important
		int x=1<<(l);   //left shift to calc. power of 2
		int y=1<<(l-1);
		cout<< max(x-y, n-x+1)<<endl;	
	}
	return 0;
}




