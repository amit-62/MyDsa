// https://leetcode.com/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum/

#include<bits/stdc++.h>
using namespace std;

int minSumOfLengths(vector<int>& arr, int target){
	int i=0;
	int j=0;
	int sum=0;
	vector<int> v;
	while(j<arr.size()){
		sum += arr[j];
		if(sum<target){
			j++;
		}
		if(sum==target){
			cout<<j-i+1;
			v.push_back(j-i+1);
			sum = 0;
			j++;
			i=j;
		}
		else if(sum>target){
			// cout<<sum<<endl;
			while(sum>target){
				sum -= arr[i];
				// cout<<sum<<' '<<arr[i]<<endl;
				if(sum==target) {
					// cout<<j-i;
					v.push_back(j-i);
					sum=0;
					j++;
					i=j;
				}	
				i++;
			}
			// j++;
			// i=j;
			// cout<<j<<"nm"<<endl;
		}
	}
	sort(v.begin(), v.end());
	if(v.size()<=1){
		return -1;
	}
	else return v[0]+v[1];	        
}	

int main()
{   
	vector<int> arr={3,2,2,4,3};
	// longestSubarray(nums);
	cout<<minSumOfLengths(arr,3);
	return 0;
}