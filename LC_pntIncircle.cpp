// https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle/

#include<bits/stdc++.h>
using namespace std;

vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
	int p=points.size();
	int q=queries.size();
	vector<int> ans;
	for(int i=0; i<q; i++){
		int cnt=0;
		int c1=queries[i][0];
		int c2 = queries[i][1];
		int r = queries[i][2];
		for(int j=0; j<p; j++){
			p1 = points[j][0];
			p2 = points[j][1];
			float dist = sqrt(sqr(c1-p1)+sqr(c2-p2));
			if(dist<=r){
				cnt++;
			} 
		}
		ans.push_back(cnt);	
	}
	return ans;
} 	

int main()
{   
	
	return 0;
}
