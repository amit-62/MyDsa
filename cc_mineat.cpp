#include<bits/stdc++.h>
using namespace std;
const long long N=1e5+10;
long long n;
long long h;
long long p[N];

bool HrFinished(long long x){
	long long ct=0;
	for(long long i=0; i<n; ++i){
		if(p[i]%x==0){
			ct=ct+(p[i]/x);
		}
		else{
			ct=ct+(p[i]/x)+1;
		}
	}
	return ct<=h;

}

int main()
{   
	int t;
	cin>>t;
	while(t--){
		cin>>n>>h;
		for(long long i=0; i<n; ++i){
			cin>>p[i];
		}
		long long lo=0, hi=1e9, mid;
		while(hi-lo>1){
			mid=(hi+lo)/2;
			if(HrFinished(mid)){
				hi=mid;
			}
			else{
				lo=mid+1;
			}
		}
		if(HrFinished(lo)){
		cout<<lo<<endl;
		}
		else cout<<hi<<endl;
		}
	return 0;
}