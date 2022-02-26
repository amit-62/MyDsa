//Finding if Cyclic..

#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
vector<int> graph[N];
bool vis[N];

bool dfs(int vertex, int parent){
	//take action on vertex after entering the vertex
	// cout<<vertex<<endl;
	vis[vertex]=true;
	bool ifLoopExist=false;
	for(auto child:graph[vertex]){
		// take action on child before entering child node
		if(vis[child] && child==parent) continue;
		if(vis[child]) return true;
		// cout<<"p "<<v<<" c "<<child<<endl;
		ifLoopExist |= dfs(child, vertex);
		//take action on child before exiting child node
	}
	//take action on vertex before exiting the vertex
	return ifLoopExist;
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
	bool ifLoopExist=false;
	for(int i=1; i<=n; i++){
		if(vis[i]) continue;
		ifLoopExist|= dfs(i, 0);
		if(ifLoopExist) break;
	}
	cout<<ifLoopExist;
	return 0;
}