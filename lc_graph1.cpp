//https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/


#include<bits/stdc++.h>
using namespace std;
// const int N=1e5+10;
// vector<int> g[N];
// int vis[N];

// void dfs(int n){
	
// 	for(auto child:g[n]){
// 		vis[child]=1;
// 		dfs(child);
// 	}
	
// }

vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges){
	int a=edges.size();
	vector<int> vis(n);
	for(auto edge : edges){
    	vis[edge[1]]	  
	}

	// for(int i=0; i<n; i++){
	// 	dfs(i);	
	// 	}

	vector<int> ans;
	for(int i=0; i<n; i++){
		if(vis[i]==0){
			ans.push_back(i);
		}
	}
	return ans;
		
}

int main()
{   
	int n=5;
	// vector<vector<int>> edges = {{0,1},{0,2},{2,5},{3,4},{4,2}};
	vector<vector<int>> edges = {{0,1},{2,1},{3,1},{1,4},{2,4}};
	vector<int> ans=findSmallestSetOfVertices(n,edges);

	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<endl;
	}

	return 0;
}