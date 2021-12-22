//https://leetcode.com/problems/count-primes/

#include<bits/stdc++.h>
using namespace std;
// const int N=1e7+10;
// vector<int> isPrime(N,1);

int countPrimes(int n) {
	// int n;
	if (n==0)
	{
		return 0;
	}
	vector<bool> isPrime(n,1);
	isPrime[0]=isPrime[1]=0;
	for(int i=2; i<n; ++i){
		if(isPrime[i]){
			for(int j=i*2; j<n; j+=i){
				isPrime[j]=0;
			}
		}	
	}
	
	return count(isPrime.begin() , isPrime.end(),true); 		        
}

int main()
{   
	// isPrime[0]=isPrime[1]=0;
	// for(int i=2; i<N; ++i){
	// 	for(int j=i*2; j<N; j+=i){
	// 		isPrime[j]=0;
	// 	}
	// }

	int n;
	cin>>n;
	// int s=0;
	// cout<< accumulate(isPrime.begin() , isPrime.begin()+n,s);
	cout<<countPrimes(n);
	return 0;
}
