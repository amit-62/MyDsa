//implementing Upper Bound and lower Bound using Binary Search.

#include<bits/stdc++.h>
using namespace std;

int UpperBound(vector<int> &v, int n){
	int lo=0, hi=v.size()-1, mid;
	while(hi-lo>1){
		mid=(hi+lo)/2;
		if(v[mid]<=n){
			lo=mid+1;
		}
		else{
			hi=mid;
		}
	}
	if(v[lo]>n){
		return lo;
	}
	else if(v[hi]>n){
		return hi;
	}
	else return -1;
}
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

int main()
{   
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; ++i){
		cin>>v[i];
	}
	int element;
	cin>>element;
	int lb=LowerBound(v,element);
	cout<<lb <<" "<<(lb!=-1?v[lb]:-1)<<endl;
	int ub=UpperBound(v,element);
	cout<<ub <<" "<<(ub!=-1?v[ub]:-1);
	return 0;
}