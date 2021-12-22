//https://leetcode.com/problems/subsets/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;

void generate(vector<int> &subset, int i, vector<int> &nums){
    if(i==nums.size()){
    	subsets.push_back(subset);
    	return;
    }

   	// when ith element is not considered it goes on to the last element in the
   	//recursion tree and it generate a subset later in next call it consider 
   	//an element and generate subset so on..
	//when ith element is not considered
	generate(subset, i+1, nums);

	//when ith element is considered
	subset.push_back(nums[i]);
	generate(subset, i+1, nums);
	subset.pop_back(); 
}


int main()
{   
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; ++i){
		cin>>nums[i];
	}

	vector<int> empty;
	generate(empty, 0, nums);

	for(auto it: subsets){
		for(auto ele: it){
			cout<<ele<<" ";
		}
		cout<<endl;
	}

	return 0;
}