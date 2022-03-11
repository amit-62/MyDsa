// calculating no. of movement to reach destination 
// using bfs.. https://www.spoj.com/problems/NAKANJ/

#include<bits/stdc++.h>
using namespace std;
const int INF=1e9+10;

int vis[8][8];
int level[8][8];

int getX(string s){
	return s[0]-'a';
	
}
int getY(string s){
	return s[1]-'1';
	
}

bool isValid(int x, int y){
	return x>=0 && y>=0 && y<8 && x<8;
}

vector<pair<int, int>> movements={
	{1,2}, {-1,2},
	{1,-2}, {-1,-2},
	{2,1}, {2, -1},
	{-2,1},{-2,-1}
};

int bfs(string src, string dest){
	int srcX=getX(src);
	int srcY=getY(src);
	int destX=getX(dest);
	int destY=getY(dest);

	queue<pair<int, int>> q;
	q.push({srcX, srcY});
	vis[srcX][srcY]=1;
	level[srcX][srcY]=0;


	while(!q.empty()){
		pair<int,int> p=q.front();
		int x=p.first, y=p.second;
		q.pop();

		for(auto movement: movements ){
			int childx= movement.first+x;
			int childy= movement.second+y;
			if(!isValid(childx,childy)) continue;
			if(!vis[childx][childy]){
				q.push({childx, childy});
				level[childx][childy]=level[x][y]+1;
				vis[childx][childy]=1;	
			}
		}
		if(level[destX][destY]!=INF){
			break;
		}

	}
	return level[destX][destY];

}

void reset(){
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			vis[i][j]=0;
			level[i][j]=INF;
		}
	}
}

int main()
{   
	int q;
	cin>>q;
	while(q--){
		reset();
		string s1, s2;
		cin>>s1>>s2;
		cout<<bfs(s1, s2)<<endl;

	}
	return 0;
}