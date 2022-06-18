// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int minn=INT_MAX;
		for(int i=0; i<n; i++){
			int a;
			cin>>a;
			minn = min(a,minn);
		}
		int t=0;
		if(x%minn==0) t=x/minn;
		else{
			t=(x/minn)+1;
			
		}
		int ans=n;
		ans= max(ans,t);
		cout<<ans<<endl;
	}
	return 0;
}




