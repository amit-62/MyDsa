//Logic: find the last node taking any node..
//By using that node again find the last node and that distance will be diam.

#include<bits/stdc++.h>
using namespace std;
const int N= 1e5;
vector<int> tree[N];
int depth[N];

void dfs(int vertex, int parent=-1){

	for(auto child: tree[vertex]){
		if(child==parent) continue;
		depth[child]=depth[vertex]+1;
		dfs(child, vertex);
		
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
	dfs(1);
	int max_depth=-1;
	int max_d_node;
	for(int i=0; i<n; i++){
		if(depth[i]>max_depth){
			max_depth=depth[i];
			max_d_node=i;
		}
		depth[i]=0;
	}

	dfs(max_d_node);
	for(int i=0; i<n; i++){
		if(depth[i]>max_depth){
			max_depth=depth[i];
			max_d_node=i;
		}
	}

	cout<<max_depth;

	return 0;
}