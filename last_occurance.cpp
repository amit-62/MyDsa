//finding last occurance of any number in array.

#include<bits/stdc++.h>
using namespace std;

int fli(vector<int> a, int idx, int x){
	if(idx==a.size()){
		return -1;
	}
	int liina = fli(a, idx+1, x);
	if(liina==-1){
		if(a[idx]==x){
			return idx; 
		}
		else{
			return -1;
		}
	}
	else return liina;
}

int main()
{   
	int n, x;
	cin>>n>>x;
	vector<int> arr(n);
	for(int i=0; i<n; ++i){
		cin>>arr[i];
	}

	cout<<fli(arr, 0, x);
	return 0;
}