//https://leetcode.com/problems/count-square-submatrices-with-all-ones/

#include<bits/stdc++.h>
using namespace std;

int countSquares(vector<vector<int>>& matrix) {
	int res=0;
	for(int i=0; i<matrix.size(); i++){
		for(int j=0; j<matrix[0].size(); j++){
			if(i>0 && j>0 && matrix[i][j]>0){
				matrix[i][j]=min(matirx[i-1][j-1], min(matrix[i-1][j],matrix[i][j-1])) +1;
				res += matrix[i][j];
			}
		}
	}

	return res;        
}

int main()
{   
	vector<vector<int>> matrix = {{1,1},{1,1}};
	return 0;
}
