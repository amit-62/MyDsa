//

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		long long l,m,n;
		cin>>n>>m>>l;
		if(n==0) cout<<m<<endl;
		int b=n+l-1;
		int left=m%b;
		int ans=left;
		if(left>=l) ans = 0;
		cout<<ans<<endl;

	}
	return 0;
}




