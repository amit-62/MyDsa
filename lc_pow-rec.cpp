//https://leetcode.com/problems/powx-n/

#include<bits/stdc++.h>
using namespace std;

double calPow(double x, int n) {
	if(n==0){
		return 1;
	}
	double res=calPow(x,n/2);

	if(n & 1){
		return x*res*res;
	}
	else{
		return res*res;
	}       
}

double myPow(double x, int n){
	if(n>=0){
		return calPow(x,n);
	}
	else{
		return 1/calPow(x,-1*n);
	}
}


int main()
{   
	double x;
	int n;
	cin>>x>>n;
	// if(n<0){
	// 	cout<< 1/myPow(x, -1*n);
	// }

	// else cout<<myPow(x,n);
	cout<<myPow(x,n);
	
	return 0;
}