#include<bits/stdc++.h>
using namespace std;

int main()
{   
	//to swap a number using XOR
	// int a=4, b=5;

	// a=a^b;
	// b=b^a;
	// a=a^b;
	// cout<<a<<" "<<b;

	// Find number with odd count in an array

	int n;
	cin>> n;
	int x;
	int ans=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		ans=ans^x;
	}
	cout<<ans;
	// int x=0;
	// for (int i = 0; i < n; ++i)
	// {
	// 	x=arr[i]^x;
	// }
	// cout<<x;


	return 0;
}