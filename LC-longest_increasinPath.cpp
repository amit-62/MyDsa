// https://leetcode.com/problems/flood-fill/

#include<bits/stdc++.h>
using namespace std;

int dfs(int i, int j, vector<vector<int>> &matrix, vector<vector<int>> &dp, int prev ){
	int r=matrix.size();
	int c=matrix[0].size();
	if(i<0 || j<0) return 0;
	if(i>=r || j>=c) return 0;
	if(matrix[i][j]<=prev ) return 0;
	

	// matrix[i][j]=newColor;
	if(dp[i][j]){
		return dp[i][j];
	}	

	int a=dfs(i-1, j, matrix, dp, matrix[i][j]) ;
	int b=dfs(i+1, j, matrix, dp, matrix[i][j]) ;
	int k=dfs(i, j-1, matrix, dp, matrix[i][j]) ;
	int d=dfs(i, j+1, matrix, dp, matrix[i][j]) ;

	dp[i][j]= 1+max({a,b,k,d});
	return dp[i][j];
	
}

int longestIncreasingPath(vector<vector<int>> &matrix) {
	int r=matrix.size();
	int c=matrix[0].size();
	vector<int> temp(c,0);
	vector<vector<int>> dp(r,temp);
	int mx_sz=0;
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[0].size(); j++){
			int crr_sz = dfs(i,j,matrix, dp, -1);
			// cout<<crr_sz;
			mx_sz = max(mx_sz, crr_sz);
		}
	}	
	return mx_sz;	
}

int main()
{   
	vector<vector<int>> matrix = {{6,4,5},{3,3,7},{2,8,1}};
    // vector<vector<int>> matrix ={{9,9,4},{6,6,8},{2,1,1}};
    cout<<longestIncreasingPath(matrix);

	return 0;
}
