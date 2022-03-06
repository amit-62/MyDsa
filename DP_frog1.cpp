// https://atcoder.jp/contests/dp/tasks/dp_a

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int height[N];

int func(int i){
	if(i==0) return 0;

	int cost=INT_MAX;
	cost = min(cost, func(i-1)+abs(height[i]-height[i-1]));
	if(i>1)
		cost = min(cost, func(i-2)+abs(height[i]-height[i-2]));

	return cost;
}

int main()
{   
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>height[i];

	}
	cout<<func(n-1);
	return 0;
}