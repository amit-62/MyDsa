//https://www.codechef.com/MP2TO302/problems/TRICOIN

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long lo=1, hi=(n+1)/2;
		while(hi-lo>1){
			long long mid=(lo+hi)/2;
			long long x=(mid*(mid+1))/2;
			if(x>n){
				hi=mid-1;
			}
			else{
				lo=mid;
			}
		}
		if((hi*(hi+1))/2*1ll <= n) cout<<hi<<endl;
		else cout<<lo<<endl;
		
	}
	return 0;
}




