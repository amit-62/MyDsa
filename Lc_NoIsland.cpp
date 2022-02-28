// https://leetcode.com/problems/number-of-islands/

#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>> &grid){
	int r=grid.size();
	int c=grid[0].size();
	if(i<0 || j<0) return;
	if(i>=r || j>=c) return;
	if(grid[i][j] != initialColor) return;

	grid[i][j]=2;

	dfs(i-1, j, grid);
	dfs(i+1, j, grid);
	dfs(i, j-1, grid);
	dfs(i, j+1, grid);
	
}

 int numIslands(vector<vector<int>>& grid) {
 	int ct=0;
	for(int i=0; i<grid.size(); i++){
		for(int j=0; j<grid[0].size(); j++){
			if(grid[i][j] != 1) continue;
			dfs(i,j,grid);
			ct++;
		}
	}
	return ct;       
}

int main()
{   
	vector<vector<int>> grid = {{1,1,1},{1,1,0},{1,0,1}};
	// int ct;
    
    // ct=numIslands(grid);
    cout<<numIslands(grid);;
	// for(auto child : grid){
	// 	for(auto it : child){
	// 		cout<<it<<" ";
	// 	}
	// 	cout<<endl;
	// }
	return 0;
}