// https://www.codechef.com/START34C/problems/GDPERM

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1 || n==3) cout<<-1<<endl;
		if(n%2==0){
			for(int i=1; i<=n; i+=2){
				cout<<i+1<<" "<<i<<" ";
			}
			cout<<endl;
		}
		if(n>=5 && n%2!=0){
			int p[5];
			for(int i=0; i<5; i++) p[i]=i+1;
			swap(p[0], p[1]);
			swap(p[2], p[4]);
			swap(p[0], p[3]);
			for(int i=0; i<5; i++) cout<<p[i]<<" ";	
			for(int i=6; i<=n; i+=2){
				cout<<i+1<<" "<<i<<" ";
			}
			cout<<endl;		
		}
	}
	return 0;
}




