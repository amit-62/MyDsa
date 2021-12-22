//https://codeforces.com/problemset/problem/9/A
#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int w,y;
	cin >>w >>y;
	int x;
	if(w>=y){
		x=w;
	}
	else x=y;

	x=6-x+1;

	if(x==1) cout<<1<<"/"<<6;
	else if(x==2) cout<<1<<"/"<<3;
	else if(x==3) cout<<1<<"/"<<2;
	else if(x==4) cout<<2<<"/"<<3;
	else if(x==5) cout<<5<<"/"<<6;
	else cout<<1<<"/"<<1;


	return 0;
}