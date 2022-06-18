// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

int LowerBound(vector<int> &v, int n){
	int lo=0, hi=v.size()-1, mid;
	while(hi-lo>1){
		mid=(hi+lo)/2;
		if(v[mid]<n){
			lo=mid+1;
		}
		else{
			hi=mid;
		}
	}
	if(v[lo]>=n){
		return lo;
	}
	else if(v[hi]>=n){
		return hi;
	}
	else return -1;
}

int specialArray(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	for(int i=1; i<=nums.size(); i++){
		int x=LowerBound(nums, i);
		// cout<<x<<endl;
		int y= nums.size()-x;
		
		if(i==y){
			return i;
		}
		else continue;
	}

	return -1;	       
}

int main()
{   
	int t=1;
	// cin>>t;
	while(t--){
		vector<int> v={0,0};
		cout<<specialArray(v);
	}
	return 0;
}




