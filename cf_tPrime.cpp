//Finding prime using Sieve of Aristhomas..
//

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<bool> isPrime(N,1);
vector<long long int> v;

int main()
{   
	isPrime[1]=false;
	for(int i=2; i<N; ++i){
		if(isPrime[i]==true){
			for(int j=2*i; j<N; j+=i){
				isPrime[j]=false;
			}
		}
	}
	
	for(int i=1; i<N; ++i){
		if(isPrime[i]){
			v.push_back(i*i);
		}
	}
	// for(int i=0; i<v.size(); ++i){
	// 	cout<<v[i]<<endl;
	// }
	cout<<v.size()<<endl;
	int n;
	cin>>n;
	while(n--){
		long long x;
		cin>>x;
	 	long long lo=1, hi=v.size()-1, mid;
		while(hi-lo>1){
			mid=(hi+lo)/2;
			// cout<<v[hi]<<" "<<v1[i]<<endl;
			if(x> v[mid]){
				lo=mid+1;
				// cout<<v[mid]<<endl;
			}
			else{
				hi=mid;
			}
		}
		if(x==v[lo]){
			cout<<"YES"<<endl;
		}
		else if(x==v[hi]){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;


	}


	return 0;
}