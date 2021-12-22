//https://codeforces.com/problemset/problem/1592/A
#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int w, h;
		cin>>w>>h;
		int d[w];
		for(int i=0; i<w; ++i){
			cin>>d[i];
		}
		sort(d, d+w);

		int a=d[w-1];
		int b=d[w-2];
		if(h%(a+b)==0){
			h=2*(h/(a+b));
			cout<<h<<endl;
		}
		else if(h%(a+b)<=a){
			h=2*(h/(a+b))+1;
			cout<<h<<endl;
		}
		else{
			h=2*(h/(a+b))+2;
			cout<<h<<endl;
		}
		
	}
	return 0;
}