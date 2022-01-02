//Finding all occurance of a number in an array.

#include<bits/stdc++.h>
using namespace std;
// const int N=1e1;
vector<int> ans;
vector<int> ffi(vector<int> a, int idx, int x){
	if(idx==a.size()){
		return ans;
	}
	if(a[idx]==x){
		ans.push_back(idx);
		ffi(a, idx+1, x);
	}
	else{
		ffi(a, idx+1, x);
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

	ffi(arr, 0, x);
	for(auto it:ans){
		cout<<it<<endl;
	}
	return 0;
}