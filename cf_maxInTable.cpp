//https://codeforces.com/problemset/problem/509/A
#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int n;
	cin >>n;
	int arr[n][n];
	for(int i=0; i<n; ++i){
		for(int j=0; j<n; ++j){
			if(i==0 || j==0){
				arr[i][j]=1;
			}
			else{
				arr[i][j]= arr[i][j-1]+arr[i-1][j];
			}
		}
	}
	cout << arr[n-1][n-1];
	return 0;
}