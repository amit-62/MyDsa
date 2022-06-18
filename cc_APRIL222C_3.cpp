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
		int ct=0;
		for(int i=0; i<n-1; i++){
			if(a[i]<=a[i+1]) continue;
			else{
				swap(a[i],a[i+1]);
				ct++;
			}
			
		}
		if(ct==0) cout<<"YES"<<endl;
		else if(ct>1) cout<<"NO"<<endl;
		else{
			for(int i=0; i<n; i++){
				if(a[i]<=1) continue;
				else break;
			}
			cout<<"NO"<<endl;
		}	
	}
	return 0;
}




