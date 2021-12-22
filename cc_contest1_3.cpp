#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n, k;
		cin>>n>>k;
		string s;
		cin>>s;
		// cout<<s[1]<<endl;
		int ct=0;
		int ans=0;
		for(int i=0; i<n; ++i){
			if(s[i]=='0'){
				ct++;
			}
			if(ct==k){
				ans++;
			}
			if(s[i]=='1' || ct==k) {
				ct=0;
			}

		}
		cout<<ans<<endl;
	}
	return 0;
}
