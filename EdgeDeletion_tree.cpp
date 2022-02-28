//Application and implementation of Edge deletion in tree..

#include<bits/stdc++.h>
using namespace std;
const int N= 1e5;
vector<int> tree[N];
int subtree_Sum[N];

void dfs(int vertex, int parent){
	
	subtree_Sum[vertex]+=vertex;
	for(auto child: tree[vertex]){
		if(child==parent) continue;
		
		dfs(child, vertex);
		subtree_Sum[vertex] += subtree_Sum[child] ;
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

	
	dfs(1,0);
	for(int i=1; i<=n; i++){
		cout<<subtree_Sum[i]<<endl;
	}

	int part1_sum;
	int part2_sum;

	int max_prdct = 1;
	for(int i=2; i<=n; i++){
		part1_sum = subtree_Sum[i];
		part2_sum = subtree_Sum[1] - part1_sum;
		if(max_prdct<part1_sum*part2_sum){
			max_prdct=part1_sum*part2_sum;
		}
	}
	cout<<max_prdct;
	return 0;
}
