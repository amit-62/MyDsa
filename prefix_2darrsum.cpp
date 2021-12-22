#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int x[N][N];
int sum[N][N];

int main()
{
	int n;
	cin >> n;
	for ( int i=1; i<=n;  ++i){
		for( int j=1; j<=n; ++j){
			cin >> x[i][j];
			sum[i][j]= sum[i-1][j]+sum[i][j-1]+x[i][j]-sum[i-1][j-1];
		}
	}

	int q;
	cin>> q;
	//int sum=0;
	while(q--){
		int a,b,c,d;
		cin >>a >>b >>c >> d;
		cout<< sum[c][d]-sum[a-1][d]+sum[c][b-1]+sum[a-1][b-1] << endl;
	}

	return 0;
}