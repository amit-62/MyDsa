// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		int avg;
		cin>>avg;
		
		if(n%2){
			for(int i=1; i<=n/2; i++){
				cout<<avg-i<<" "<<avg+i<<" ";
			}
			cout<<avg<<endl;
		}
		else {
			for(int i=1; i<=n/2; i++){
				cout<<avg-i<<" "<<avg+i<<" ";
			}
			cout<<endl;
		}

	}
	return 0;
}




