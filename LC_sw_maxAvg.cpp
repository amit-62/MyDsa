// https://leetcode.com/problems/maximum-average-subarray-i/

#include<bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
	int i=0;
	int j=0;
	double sum=0, avg, ans=INT_MIN;
	while(j<nums.size()){
        sum += nums[j];
        cout<<sum<<"S"<<endl;
		if(j-i+1<k){
			j++;
		}
		else if(j-i+1==k){
			avg=sum/k;
			cout<<avg<<"A"<<endl;
			ans=max(ans,avg);
			sum -= nums[i];
			j++;
			i++;		
		}
	}
	return ans;        
}

int main()
{   
	vector<int> v={2,2,2,2,5,5,5,8};
	int k=4;
	cout<<findMaxAverage(v,k);

}