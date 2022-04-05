// https://leetcode.com/problems/partition-equal-subset-sum/

#include<bits/stdc++.h>
using namespace std;

// O(n^3) solution
// int numTeams(vector<int>& rating) {
// 	int n=rating.size();
// 	int c=0;
// 	for(int i=0; i<n-2; i++){
// 		for(int j=i+1; j<n-1; j++){
// 			for(int k=j+1; k<n; k++){
// 				if((rating[i] < rating[j] && rating[j] < rating[k]) ||  (rating[i] > rating[j] && rating[j] > rating[k])){
// 					c++;
// 				}	
			
// 			}
// 		}
// 	}

// 	return c;       
// }

//O(n^2)
int numTeams(vector<int>& rating) {
	int n=rating.size();
	int c=0;
	for(int i=0; i<n; i++){
		int lftSml=0, lftLrg=0;
		int rtSml=0, rtlrg=0;

		for(int j=0; j<i; j++){
			if(rating[j]<rating[i]){
				lftSml++;
			}
			if(rating[j]>rating[i]){
				lftLrg++;
			}
		}

		for(int k=i+1; k<n; k++){
			if(rating[k]<rating[i]){
				rtSml++;
			}
			if(rating[k]>rating[i]){
				rtlrg++;
			}
		}
		c += lftSml*rtlrg+lftLrg*rtSml;	
	}

	return c;       
}

int main()
{   

	vector<int> rating = {1,2,3,4};
	cout<<numTeams(rating);
	return 0;
}