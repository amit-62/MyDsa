//https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum-56e0eb99/

#include<bits/stdc++.h>
using namespace std;
const int N=2e5 +10;
int hsh[N];
int ct_divisor[N];

int main()
{   
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		hsh[x]++;
	}

	for (int i = 1; i < N; ++i)
	{
		for(int j=i; j<N; j+=i){
			ct_divisor[i] += hsh[j];
		}
	}

	int q;
	cin>>q;
	while(q--){
		int a, b;
		cin >>a>>b;
		long long ans;
		ans = ct_divisor[a]+ct_divisor[b];
		long long lcm=(a*1ll*b)/__gcd(a,b);
		if(lcm<N){
			ans=ans-ct_divisor[lcm] ;
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
