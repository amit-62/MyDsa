#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int> &nums) {
    int n=nums.size();
    int n_sub=(1<<n);
    vector<vector<int>> subsets1;
    for(int i=0; i<n_sub; ++i){
    	vector<int> subset;
    	for (int j = 0; j < n ; ++j)
    	{
    		if((i & (1<<j))!=0){
    			subset.push_back(nums[j]);
    		}
    	}
    	subsets1.push_back(subset);
    }
    return subsets1;
}

int main()
{   
	int n;
	cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}

	auto all_subset= subsets(v);

	for(auto subset : all_subset){
		for(auto ele : subset){
			cout<<ele<<" ";
		}
		cout<<endl;
	}	
	
	return 0;
}