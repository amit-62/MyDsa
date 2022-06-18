// 

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
		int sum=0;
		for(int i=0; i<n-1; i++){
			int a;
			cin>>a;
			sum +=a;
		}
		int ans = ((n)*avg)-sum;
		if(ans<0) cout<<0<<endl;
		else cout<<ans<<endl;
	}
	return 0;
}




