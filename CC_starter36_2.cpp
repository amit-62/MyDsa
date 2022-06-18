// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%5==0){
			cout<<(4*(n/5));
		}
		else{
			cout<<((4*(n/5)) + (n%5));
		}
		cout<<endl;
	}
	return 0;
}




