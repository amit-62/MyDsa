//https://leetcode.com/problems/power-of-four/

#include<bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) {
	return n>0 && ((n&(n-1))==0 && (n-1)%3==0);
}

int main()
{   
	int n;
	cin>>n;
	cout<<isPowerOfFour(n);
	// cout<<(3>>2);
	
	return 0;
}

