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
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		int cp=0, cn=0;
		for(int i=0; i<n; i++){
			if(a[i]==1) cp++;
			else cn++;
		}

		if(cp==n || cn==n) cout<<"NO"<<endl;
		else if(cn==cp+1 || cp==cn+1 || cp==cn) cout<<"YES"<<endl;
		else if(cn-cp==2 || cp-cn==2){
			if(cn%2==0) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}

		else cout<<"NO"<<endl;
		
	}
	return 0;
}




