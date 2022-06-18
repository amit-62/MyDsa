// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int>& arr) {
	int n=arr.size();
	int i=0, j=n-1;
	while(i<n-1 && arr[i]<arr[i+1]){
		i++;
	}     
	while(j>0 && arr[j]<arr[j-1]){
		j--;
	}
	if(i>0 && j<n-1 && i==j) return true;
	else return false;
}

int main()
{   
	vector<int> v={1,4,3,2,1};
	cout<<validMountainArray(v);
	return 0;
}




