//https://leetcode.com/problems/stone-game/

#include<bits/stdc++.h>
using namespace std;

int alice=0;
int bob=0;


bool addStone(int i, int n, vector<int>& piles){
	if(n<i) return alice>bob;

	if(piles[i]>piles[n]){
		if((n-i)%2!=0){
			alice+=piles[i];
		}
		else bob+=piles[i];	
		addStone(i+1,n,piles);
	}
	else{
		if((n-i)%2!=0){
			alice+=piles[n];
		}
		else bob+=piles[n];
		addStone(i,n-1,piles);
	}

	// if(alice>bob) return true;
	// else return false;
}

bool stoneGame(vector<int>& piles) {
	int s= piles.size();
	bool ans=addStone(0, s-1, piles);
	return ans;        
}

int main()
{   
	vector<int> piles = {3,7,2,3};
	cout<<stoneGame(piles);
	return 0;
}