//Basic of Graph - Depth first search.
//It state that trasverse to last element of vetices and go on till the
//last child. Whenever we encounter any visited element just skip it.

#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
vector<int> graph[N];
bool vis[N];

void dfs(int v){
	//take action on vertex after entering the vertex
	cout<<v<<endl;
	vis[v]=true;
	for(auto child:graph[v]){
		//taake action on child before entering child node
		cout<<"p "<<v<<" c "<<child<<endl;
		if(vis[child]) continue;
		dfs(child);
		//taake action on child before exiting child node
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
	dfs(1);

	return 0;
}