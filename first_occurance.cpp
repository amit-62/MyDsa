//Finding first occurance of a number in an array.

#include<bits/stdc++.h>
using namespace std;

int ffi(vector<int> a, int idx, int x){
	if(idx==a.size()){
		return -1;
	}
	if(a[idx]==x){
		return idx;
	}
	else{
		int fsi=ffi(a, idx+1, x);
		return fsi;
	}
	
}

int main()
{   
	int n, x;
	cin>>n>>x;
	vector<int> arr(n);
	for(int i=0; i<n; ++i){
		cin>>arr[i];
	}

	cout<<ffi(arr, 0, x);
	return 0;
}