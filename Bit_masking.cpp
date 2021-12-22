#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i=31; i>=0; --i){
		cout<<((num >> i) & 1);
	}
	cout<<endl;
}

int main()
{    
	int n;
	cin >>n;
	vector<int> masks(n,0);
	for (int i = 0; i < n; ++i)
	{
		int num_worker;
		cin>>num_worker;
		// cout<<num_worker<<endl;
		int mask=0;
		for (int j = 0; j < num_worker; ++j)
		{
			 int day;
			 cin>>day;
			 // cout<<day<<endl;
			 mask = (mask | (1<<day)); 
			 // printBinary(mask);
		}
		masks[i]=mask;
	}
    // printBinary(masks[1]);
    int max_days=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			int intersection = (masks[i] & masks[j]);
			int commondays = __builtin_popcount(intersection);
			cout<<i<<" "<<j<<" "<<commondays<<endl;
			max_days= max(max_days,commondays);
		}
	}
	cout<<max_days;
	return 0;
}