//https://leetcode.com/problems/minimum-number-of-work-sessions-to-finish-the-tasks/

#include<bits/stdc++.h>
using namespace std;

//  vector<int> findErrorNums(vector<int>& nums) {
//     // int a, b;
//     vector<int> v(2,0);
//     for(int i=0; i<nums.size(); i++){
//         if(nums[i]==nums[i+1]){
//             v[0]=nums[i];
//             if(nums[i-1]+1==nums[i] || nums[i+1]==nums[i]){
//                 v[1]=nums[i]+1;
//             }
//             else{
//                 v[1]=nums[i]-1;
//             }
//             // break;
//         }
//     }
//     return v;
// }

vector<int> findErrorNums(vector<int>& nums) {
	map<int , int> m;
    vector<int> v(2,0);
    for(int i=0; i<nums.size(); i++){
 		v[1] ^= (i+1) ^ nums[i];
 		m[nums[i]]++;
	}

	for(auto it:m){
		if(it.second==2){
			v[0]=it.first;
		}
	}

	v[1]^=v[0];

	return v;
}

int main()
{   
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
	}
	vector<int> a = findErrorNums(v);
	for(auto it:a){
		cout<<it<<" ";
	}
	return 0;
}

