//https://www.spoj.com/problems/EKO/

#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int n;
long long m;
long long tree[N];

bool issufficientWood(int h){
	long long wood=0;
	for(int i=0; i<n; ++i){
		if(tree[i]>=h){
			wood +=(tree[i]-h);
		}
	}
	return wood>=m;
}

int main()
{   
	cin>>n>>m;
	for(int i=0; i<n; ++i){
		cin>>tree[i];
	}

	long long lo=0, hi=N-1, mid;

	while(hi-lo>1){
		long long mid = (lo+hi)/2;
		if(issufficientWood(mid)){
			lo=mid;
		}
		else{
			hi=mid-1;
		}
	}
	if(issufficientWood(hi)){
		cout<<hi<<endl;
	}
	else cout<<lo<<endl;
	
	return 0;
}