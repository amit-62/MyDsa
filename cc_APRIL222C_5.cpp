// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>> vect;
		for(int i=0; i<n; i++){
			int x,y;
			cin>>x>>y;
			vect.push_back( make_pair(x,y) );
		}
		// for(int i=0; i<n; i++){
		// 	cout<<vect[i].first<<" "<<vect[i].second<<endl;
		// }n
		vector<pair<int,int>> vpr;
		for(int i=0; i<n-2; i++){
			for(int j=i+1; j<n-1; j++){
				vpr.push_back( make_pair(i,j));
			}
		}
		// for(int i=0; i<vpr.size(); i++){
		// 	cout<<vpr[i].first<<" "<<vpr[i].second<<endl;
		// }
		vector<vector<int>> fv;
		for(int i=0; i<vpr.size(); i++){
			for(int j=vpr[i].second+1; j<n; j++){
				int x1,x2,x3;
				int y1,y2,y3;
				x1=vect[vpr[i].first].first; y1=vect[vpr[i].first].second;
				x2=vect[vpr[i].second].first; y2=vect[vpr[i].second].second;
				x3=vect[j].first; y3=vect[j].second;
				
				int d1= (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
				int d2= (x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
				int d3= (x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
				// cout<<d1<<" "<<d2<<" "<<d3<<endl;
				vector<int> v={d1,d2,d3};
				fv.push_back(v);
			}
		}
		int ct=0;
		for(int i=0; i<fv.size(); i++){
			sort(fv[i].begin(), fv[i].end());
			int x=fv[i][0]+fv[i][1];
			int y=fv[i][2];
			// cout<<x<<" "<<y<<endl;
			if(x==y) ct++;
		}
		cout<<ct<<endl;
	}
	return 0;
}




