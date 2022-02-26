//https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
//to find connected component

#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
vector<int> graph[N];
bool vis[N];
vector<vector<int>> cc;
vector<int> current_cc;

void dfs(int v){
	//take action on vertex after entering the vertex
	vis[v]=true;
	current_cc.push_back(v);
	for(auto child:graph[v]){
		// take action on child before entering child node
		if(vis[child]) continue;
		dfs(child);
		//take action on child before exiting child node
	}
	//take action on vertex before exiting the vertex
}

int main()
{   
	int n,m;
	cin>>n>>m;
	for(int i=0; i<m; ++i){
		int v1,v2;
		cin>>v1>>v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
		
	}
	int c=0;

	for(int i=1; i<=n; i++){
		if(vis[i]) continue;
		current_cc.clear();
		dfs(i);
		cc.push_back(current_cc);
		c++;
	}

	cout<<c<<endl;

	for(auto c_v:cc){
		for(auto it:c_v){
			cout<<it<<" ";
		}
		cout<<endl;
	}

	// dfs(1);

	return 0;
}