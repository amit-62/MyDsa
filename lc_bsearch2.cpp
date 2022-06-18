// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;
vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
	int diff=(accumulate(aliceSizes.begin(),aliceSizes.end(),0)-accumulate(bobSizes.begin(), bobSizes.end(),0))/2;
	unordered_set<int> s(aliceSizes.begin(),bobSizes.end());
	vector<int> ans(2);
	for(auto b:bobSizes){
		if(s.count(b+diff)){
			ans= {b+diff, b};
			break;
		}
	}
	return ans;
}
int main()
{   
	int t=1;
	// cin>>t;
	while(t--){
		vector<int> a={1,1};
		vector<int> b={2,3};
		vector<int> ans=fairCandySwap(a,b);
		for(auto it:ans){
			cout<<it<<endl;
		}
	}
	return 0;
}




