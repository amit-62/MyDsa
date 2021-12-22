#include<bits/stdc++.h>
using namespace std;
const int N=1e3;

int graph1[N][N];

vector<pair<int,int>> graph2[N]; //Array of vector and vector of pair

int main()
{   
	int n, m;
	cin>>n>>m;
	for(int i=0; i<m; ++i){     //loop through m edges and mark 1 which is connected.
		int v1,v2,wt;
		cin>>v1>>v2>>wt;
		graph1[v1][v2]=wt;
		graph1[v2][v1]=wt;

		graph2[v1].push_back({v2, wt});
		graph2[v2].push_back({v1, wt});
	}
	return 0;
}