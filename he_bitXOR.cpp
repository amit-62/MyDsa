//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xor-challenge-2420f189/

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int n;
	cin>>n;
	int bit_sz= log2(n)+1; //for length of bit..
	int a=0, b=0;
	vector<int> bit_set;
	for(int i=0; i<bit_sz; ++i){
		if(n & (1<<i)){
			bit_set.push_back(i);
		}
		else{
			a |= (1<<i);
			b |= (1<<i);
		}
	}

	int ans=0;
	int sz= 1<< bit_set.size();
	for(int mask=0; mask<sz; mask++){
		int a_copy=a, b_copy=b;
		for(int i=0; i<bit_set.size(); ++i){
			if(mask & (1<<i)){
				a_copy |= (1<<bit_set[i]);
			}
			else b_copy |= (1<<bit_set[i]);
		}
		ans = max(ans*1ll, a_copy*1ll*b_copy);
	}
	cout<<ans<<endl;
	return 0;
}
