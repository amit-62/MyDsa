#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q,type;
	cin >> q;
	map<string, int>m;
	for(int i=0; i<q; i++){
		cin>> type;
		string x;
		int y;
		if(type==1){
			cin>>x;
			cin >>y;
			m[x]=m[x] +y;
		}
		else if(type==2){
			cin>>x;
			m[x]=0;
		}
		else if(type==3){
			cin>>x;
			cout<< m[x]<<endl;
		}
	}
	return 0;
}