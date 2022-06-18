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
		int c1=0, c2=0;
		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			if(x==1){
				c1++;
			}
			if(x==2){
				c2++;
			}
		}
		long ans1 = c2*(c2-1)/2 + (n-c1)*c1 - c1*(c1-1)/2;
		cout<<ans1<<endl;
	}
	return 0;
}




