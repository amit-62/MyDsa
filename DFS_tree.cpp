// code to calaulate hight and depth of tree

#include<bits/stdc++.h>
using namespace std;
const int N= 1e5;
vector<int> tree[N];
int depth[N], height[N];

void dfs(int vertex, int parent){

	for(auto child: tree[vertex]){
		if(child==parent) continue;
		depth[child]=depth[vertex]+1;
		dfs(child, vertex);
		height[vertex]= max(height[vertex], height[child]+1);
	}
}

int main()
{   
	int n;
	cin>>n;
	for(int i=0; i<n-1; ++i){
		int v1,v2;
		cin>>v1>>v2;
		tree[v1].push_back(v2);
		tree[v2].push_back(v1);
	}

	// cout<<depth<<endl;
	// cout<<height<<endl;
	dfs(1,0);
	for(int i=1; i<=n; i++){
		cout<<height[i]<<" "<<depth[i]<<endl;
	}
	return 0;
}