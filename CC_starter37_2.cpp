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
		int y;
		cin>>y;
		int m=0;
		int s=0;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			v[i]=x;
			m=max(m,x);
			// cout<<x<<endl;
			if(x<=y){
				s+=1;
			}
			else{
				if(x%y==0){
					s=s+(x/y);
				}
				else s=s+(x/y)+1;
			}
		}
		// for()
		if(m>=s) cout<<s<<endl;
		else cout<<m<<endl;
		
	}
	return 0;
}




