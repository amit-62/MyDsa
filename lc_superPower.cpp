//https://leetcode.com/problems/super-pow/

#include<bits/stdc++.h>
using namespace std;
// const int M=1337;

int iterativeMethod(int a, int b, int m){
	a=a%m;
	int ans=1;
	while(b){
		if(b&1){
			ans= (ans*1LL*a)%m;
		}
		a=(a*1LL*a)%m;
		b=b>>1;
	}
	return ans;
}
int superPow(int a, vector<int>& b){
	int sum=0;
	for(auto it : b ){
		sum=((sum*10)+it)%1140;
	}
	return iterativeMethod(a, sum, 1337);
}

int main()
{   
	int a, b;
	cin>>a>>b;
	vector<int> v(b);
	for (int i = 0; i < b; ++i)
	{
		cin>>v[i];
	}
	cout<<superPow(a,v);
	return 0;
}
