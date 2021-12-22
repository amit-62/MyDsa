//Basic of Selection sort and Merge sort.

#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int a[N];

void merge(int l, int r, int mid){
	cout<<"index"<<l<<" "<<r<<" "<<mid<<endl;
	int l_sz= mid-l+1;
	int L[l_sz+1];
	int r_sz = r-mid;
	int R[r_sz+1];
	for(int i=0; i<l_sz; ++i){
		L[i]=a[i+l];
	}

	for(int i=0; i<l_sz; ++i){
		cout<<""<<L[i];
	}
	cout<<endl;
	for(int i=0; i<r_sz; ++i){
		R[i]=a[i+mid+1];
	}

	for(int i=0; i<r_sz; ++i){
		cout<<R[i];
	}
	cout<<endl;
	R[r_sz]=L[l_sz]=INT_MAX;
	int l_i=0;
	int r_i=0;
	for(int i=l; i<=r; ++i){
		if(L[l_i]<=R[r_i]){
			a[i]=L[l_i];
			l_i++;
		}
		else{
			a[i]=R[r_i];
			r_i++;
		}
	}
	for(int i=l; i<=r; ++i){
		cout<<a[i];
	}
	cout<<endl;
}

void mergesort(int l, int r){
	cout<<"m"<<" "<<l<<" "<<r<<endl;
	if(l==r) return;
	int mid=(l+r)/2;
	mergesort(l,mid);
	cout<<l <<" "<<53<<endl;
	mergesort(mid+1, r);
	cout<<r <<" "<<55<<endl;
	cout<<"l r "<<l<<" "<<r<<endl;
	merge(l,r,mid);
}

int main()
{   
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	
	//code for merge sort
	/*for(int i=0; i<n; ++i){
		int min_index=i;
		for(int j=i; j<n; ++j){
			if(a[j]<a[min_index]){
				min_index=j;
			}
		}
		swap(a[i],a[min_index]);
	}*/

	mergesort(0,n-1);
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}

