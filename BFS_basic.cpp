//Applying bfs concept

#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
vector<int> tree[N];
int vis[N]; 
int level[N];

void bfs(int src){
	queue<int> q;
	q.push(src);
	vis[src]=1;

	while(!q.empty()){
		int crr_v = q.front();
		q.pop();

		for(auto child : tree[crr_v]){
			if(!vis[child]){
				q.push(child);
				vis[child] = 1;
				level[child]= level[crr_v]+1;
			}	
		}
	}
	// cout<<endl;
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
	bfs(1);
	for(int i=1; i<=n; i++){
		cout<<level[i]<<endl;
	}
	return 0;
}