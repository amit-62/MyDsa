// https://www.codechef.com/START35C/problems/JS

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
		int od[n], ev[n];
		int co=0, ce=0;
		for(int i=0; i<n; i++){
			if(a[i]%2==0){
				ce++;
			}
			else co++;
			od[i]=co;
			ev[i]=ce;
		}

		if(a[0]%2 == a[n-1]%2){
			if(a[0]%2==0){
				cout<< ev[n-1]-1<<endl;
			}
			if(a[0]%2!=0){
				cout<< od[n-1]-1<<endl;
			}
		}

		else{
			int jmp= INT_MAX;
			if(a[0]%2==0){
				for(int i=0; i<n; i++){
					if(a[i]%2==0){
						jmp = min(jmp, (ev[i]-1)+od[n-1]-od[i]);
					}
				}
			}
			if(a[0]%2!=0){
				for(int i=0; i<n; i++){
					if(a[i]%2!=0){
						jmp = min(jmp, (od[i]-1)+ev[n-1]-ev[i]);
					}
				}
			}
			cout<<jmp<<endl;
		}
	}
	return 0;
}




