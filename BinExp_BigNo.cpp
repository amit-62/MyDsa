#include<bits/stdc++.h>
using namespace std;
const long long int M=1e18+7;
//when M is in order of 18

long long BinMultiply(long long a, long long b){
	int ans=0;
	while(b){
		if(b&1){
			ans= (ans+a)%M;
		}
		a=(a+a)%M;
		b=b>>1;
	}
	return ans;
}


long long iterativeMethod(long long a, long long b){
	int ans=1;
	while(b){
		if(b&1){
			ans= BinMultiply(ans,a);
		}
		a=BinMultiply(a,a);
		b=b>>1;
	}
	return ans;
}

int main()
{   
	long long a, b;
	cin>>a>>b;
	cout<<iterativeMethod(a,b);
	return 0;
}
