//https://codeforces.com/problemset/problem/1325/A
#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int n1;
	cin >> n1;
	int a[n1];
	for(int i=0; i<n1; ++i){
		cin>>a[i];
	}
	int n2;
	cin >> n2;
	int b[n2];
	for(int i=0; i<n2; ++i){
		cin>>b[i];
	}
	sort(a,a+n1);
	sort(b,b+n2);
	cout<<a[n1-1]<<" "<<b[n2-1]<<endl;
	return 0;
}