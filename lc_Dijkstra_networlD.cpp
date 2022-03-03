// https://leetcode.com/problems/network-delay-time/

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10, INF=1e9+10;


int dijkstra(int source, int n, vector<pair<int,int>> g[N]){
	vector<int> vis(N,0);
	vector<int> dist(N,INF);
	set<pair<int,int>> st;

	st.insert({0,source});
	dist[source]=0;

	while(st.size()>0){
		auto node = *st.begin();
		int v=node.second;
		int dist_v=node.first;
		st.erase(st.begin());
		if(vis[v]) continue;
		vis[v]=1;

		for(auto child : g[v]){
			int child_v = child.first;
			int child_wt= child.second;
			if(dist[child_v]>dist[v]+child_wt){
				dist[child_v]=dist[v]+child_wt;
				st.insert({dist[child_v],child_v});
			}

		}
	}

	int ans=0;
	for(int i=1; i<=n; i++){
		if(dist[i]== INF) return -1;
		ans=max(ans, dist[i]);
	} 
	return ans;
}

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
	vector<pair<int,int>> g[N];
	for(int i=0; i<times.size(); i++){
		g[times[i][0]].push_back({times[i][1],times[i][2]});
	}

	return dijkstra(k,n,g);	    	        
}

int main()
{   
	int n=4, k=2;
	vector<vector<int>> times={{2,1,1},{2,3,1},{3,4,1}};
	cout<<networkDelayTime(times,n,k);

	return 0;
}