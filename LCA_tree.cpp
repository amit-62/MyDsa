#include<bits/stdc++.h>
using namespace std;
const int N= 1e5;
vector<int> tree[N];
int par[N];

void dfs(int vertex, int parent=-1){
	par[vertex]=parent;
	for(auto child: tree[vertex]){
		if(child==parent) continue;
		dfs(child, vertex);
		
	}
}

vector<int> path(int vertex){
	vector<int> ans;
	while(vertex!=-1){
		ans.push_back(vertex);
		vertex=par[vertex];
	}
	reverse(ans.begin(),ans.end());
	return ans;
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
	int x,y;
	cin>>x>>y;
	dfs(1);
	vector<int> ans1=path(x);
	vector<int> ans2=path(y);

	int min_l=min(ans1.size(), ans2.size());
	int lca=-1;
	for(int i=0; i<min_l; i++){
		if(ans1[i]==ans2[i]){
			lca=ans1[i];
		}
		else break;
		
	}
	cout<<lca;
	
	return 0;
}