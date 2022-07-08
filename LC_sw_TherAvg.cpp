// https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/

#include<bits/stdc++.h>
using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold) {
	int i=0;
	int j=0;
	int cnt=0;
	double sum=0, avg;
	while(j<arr.size()){
        sum += arr[j];
        // cout<<sum<<"S"<<endl;
		if(j-i+1<k){
			j++;
		}
		else if(j-i+1==k){
			avg=sum/k;
			// cout<<avg<<"A"<<endl;
			if(avg>=threshold){
				cnt++;
			}
			sum -= arr[i];
			j++;
			i++;		
		}
	}
	return cnt;        
}

int main()
{   
	vector<int> v={11,13,17,23,29,31,7,5,2,3};
	int k=3, thresold=5;
	cout<<numOfSubarrays(v,k,thresold);

}