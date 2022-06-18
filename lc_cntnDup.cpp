// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
	int i=0;
	int j=0;
	if(k>=nums.size()) k=nums.size()-1;
	unordered_map<int, int> m;
	while(j<nums.size()){
		m[nums[j]]++;
		if(j-i<k){
			j++;
		}

		else if(j-i==k){
			for(auto it:m){
			cout<<it.first<<" "<<it.second<<endl;
		}
			if(m.size()<=k){
				return true;
				// break;
			}
			else{
				// m[nums[i]]--;
				if(m[nums[i]]==1) m.erase(nums[i]);
				else m[nums[i]]--;
				i++;
				j++;
			}
		}
	}
	return false;        
}

int main()
{   
	vector<int> nums={1,1};
	cout<<containsNearbyDuplicate(nums,2);
	return 0;
}