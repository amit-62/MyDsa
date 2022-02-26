// https://leetcode.com/problems/flood-fill/

#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, int initialColor, int newColor, vector<vector<int>> &image){
	int r=image.size();
	int c=image[0].size();
	if(i<0 || j<0) return;
	if(i>=r || j>=c) return;
	if(image[i][j] != initialColor) return;

	image[i][j]=newColor;

	dfs(i-1, j, initialColor, newColor, image);
	dfs(i+1, j, initialColor, newColor, image);
	dfs(i, j-1, initialColor, newColor, image);
	dfs(i, j+1, initialColor, newColor, image);
	
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor) {
	 int initialColor = image[sr][sc];
	 if(initialColor!=newColor){
	 	dfs(sr, sc, initialColor, newColor, image);
	 }	
	 return image;

}

int main()
{   
	vector<vector<int>> image = {{1,1,1},{1,1,0},{1,0,1}};
	int sr=1, sc=1, newColor=2;
    
    floodFill(image, sr, sc, newColor);
	for(auto child : image){
		for(auto it : child){
			cout<<it<<" ";
		}
		cout<<endl;
	}

	return 0;
}