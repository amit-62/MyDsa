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
		int x=(n-1)*3;
		int y;
		if((n-2)%2==0){
			y=((n-2)/2)*3;
		}
		else{
			y=((n-2)/2+1)*3;
		}
		cout<<x-y<<endl;
	}
	return 0;
}




