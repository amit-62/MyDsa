// code to calaulate hight and depth of tree

#include<bits/stdc++.h>
using namespace std;
const int N= 1e5;
vector<int> tree[N];
int subtree_Sum[N], subtree_even[N];

void dfs(int vertex, int parent){
	if(vertex%2==0){
		subtree_even[vertex]+=1;
	}
	subtree_Sum[vertex]+=vertex;
	for(auto child: tree[vertex]){
		if(child==parent) continue;
		
		dfs(child, vertex);
		subtree_Sum[vertex] += subtree_Sum[child] ;
		subtree_even[vertex] += subtree_even[child];
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
		cout<<subtree_Sum[i]<<" "<<subtree_even[i]<<endl;
	}
	return 0;
}
