
#include<bits/stdc++.h>
using namespace std;

const int N=1e4;
vector<int> graph[N];
bool vis[N];

vector<vector<int>> cc;
vector<int> current_cc;

void dfs(int v){
	vis[v]=true;
	current_cc.push_back(v);
	for(auto child:graph[v]){
		if(vis[child]) continue;
		dfs(child);
	}
}

int main()
{   
	int a;
	cin>>a;
	vector<int> val(a);
	for(int i=0; i<a; i++){
		cin>>val[i];
	}

	int m;
	cin>>m;
	for(int i=0; i<m; ++i){
		int v1,v2;
		cin>>v1>>v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
		
	}

	for(int i=1; i<=a; i++){
		if(vis[i]) continue;
		current_cc.clear();
		dfs(i);
		cc.push_back(current_cc);
	}
    
    int mx=0;
    
    for(auto c_v:cc){
    	int sum=0;
		for(int it:c_v){
			sum= sum + val[it-1];
		}
		mx=max(mx, sum);
	}
	cout<<mx;
	return 0;
}