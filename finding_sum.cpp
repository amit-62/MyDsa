#include<bits/stdc++.h>
using namespace std;
const int N=1e6 +10;
int a[N];

int main()
{
	int n,k;
	cin >> n >> k;
	for(int i =1; i<=n; ++i){
		cin >> a[i];
	}

	for(int i =1; i<=n; ++i){
		for(int j=1; j<=n; ++j){

			if(a[i]+a[j]==k){
				cout<< "YES";
				break;

			}

			
		}
	}
	return 0;
}