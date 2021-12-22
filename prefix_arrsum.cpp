#include<bits/stdc++.h>
using namespace std;

const int N=1e5 + 10;
//const int M= 1e5 + 10;
int a[N];
int sum[N];

int main()
{
	int n;
	cin >> n;
	for(int i=1; i<=n; ++i ){
		cin >> a[i];
		sum[i] = sum[i-1] + a[i];
	}

	

	int q;
	cin >> q;
	while(q--){
		int l,r;
		//long int sum =0;
		cin >> l >> r;
		cout << sum[r]-sum[l-1] << endl;
	}
	return 0;
}