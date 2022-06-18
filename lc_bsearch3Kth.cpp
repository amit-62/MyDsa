// https://leetcode.com/problems/kth-missing-positive-number/

#include<bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int>& arr, int k) {
	int s=arr.size();
	int mn = a[s-1]-s;
	if(mn>k){
		return a[s-1]+k-mn;
	}        
	else{
		int lo=0, hi=s-1,mid;
		while(hi-lo>1){
			mid=(lo+hi)/2;
			if(a[mid]-(m+1)<k){
				lo=mid+1;
			}
			else hi=mid;
		}
		return lo+k;
	}
}

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<n<<endl;
	}
	return 0;
}




