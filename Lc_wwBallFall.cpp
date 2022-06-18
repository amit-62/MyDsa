// https://leetcode.com/problems/where-will-the-ball-fall/

#include<bits/stdc++.h>
using namespace std;

vector<int> findBall(vector<vector<int>>& grid) {
	int r=grid.size();
	int c=grid.size();
	vector<int> ans;
	for(int b=0; b<c; b++){
		int j=b;
		for(int i=0; i<r; i++){
			if(grid[i][j]==grid[i][j+1]){
				j=j+1;
			}
			else if()
		}
	}
}

int main()
{   
	
	return 0;
}
