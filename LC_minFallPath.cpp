//https://leetcode.com/problems/minimum-falling-path-sum/

#include<bits/stdc++.h>
using namespace std;

int minFallingPathSum(vector<vector<int>>& matrix) {
	int n= matrix.size();

	for(int i=1; i<n-1; i++){
		for(int j=0; j<n-1; j++){
			matrix[i][j] += min({matrix[i-1][j], matrix[i-1][max(0, j-1)], matrix[i-1][min(n-1,j+1)]});
		}   
	} 

	int x=INT_MAX;
	for(int j=0; j<n-1; j++){
		x=min(matrix[n-1][j],x)
	}

	return x;
}

int main()
{   
	vector<vector<int>> matrix = {{1,2}, {2,3}};
	cout<<minFallingPathSum(matrix);
	return 0;
}