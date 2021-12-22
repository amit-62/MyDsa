//https://leetcode.com/problems/divide-two-integers
#include<bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor) {
	int sign=1;
	if((divisor>0 && dividend>0) || (divisor<0 && dividend<0)){
		sign=1;
	}
	else sign =-1;
	long long a=abs(divisor);
	long long b=abs(dividend);
	long long x=0;
	long long q=0;
	for(long long i=31; i>=0; i--){
		if((x+(a<<i))<=b){
			x +=(a<<i);
			q =q + (1LL<<i);
		}
	}
	if(sign==-1){
		q=-q;
	}else q=q;
	
	if(q>INT_MAX){
		return INT_MAX;
	}
	else if( q<INT_MIN){
		return INT_MIN;
	}
	else return (int)q;


}


int main()
{   
	int b, a;
	cin>> b >>a;
	// int sig= b<0 || a<0 ? -1:1;
	// int x=0;
	cout<<divide(b, a);
	// int ct=0;
	// for (int i = 0; i < b; ++i)
	// {
	// 	x=x+(a<<1);
	// 	// cout<<a<<endl;
	// 	// cout<<x<<endl;
	// 	if(b<(a<<1)){
	// 		ct+=1;
	// 		break;
	// 	}
	// 	else if(x<b){
	// 		ct +=2;
	// 	}
	// 	else if(b==x){
	// 		ct=ct+2;
	// 		break;
	// 	}
	// 	else if(x>b & b>=(x-a)){
	// 		ct +=1;
	// 		break;
	// 	}
	// 	else if(x>b & b<(x-a)){
	// 		ct +=0;
	// 		break;
	// 	}

	// }
	// cout<<ct;
	return 0;
}

