// https://leetcode.com/problems/keys-and-rooms/

#include<bits/stdc++.h>
using namespace std;

void dfs(int n, vector<vector<int>>& rooms, vector<int> &vis){
	vis[n] = 1;
    for(int i = 0; i < rooms[n].size(); i++){
        if(!vis[rooms[n][i]]){
            dfs(rooms[n][i], rooms, vis);
        }
    }
}

bool canVisitAllRooms(vector<vector<int>>& rooms) {
	int x=rooms.size();
	vector<int> vis(x,0);

	dfs(0,rooms,vis);
	
	for(int i = 0; i < x; i++){
        if(!vis[i]){
            return false;
        }
    }
    return true;	        
}

int main()
{   
	vector<vector<int>> rooms={{1,3},{3,0,1},{2},{0}};
	cout<<canVisitAllRooms(rooms)<<100;
	return 0;
}