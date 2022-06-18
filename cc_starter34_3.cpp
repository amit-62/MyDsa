// https://www.codechef.com/START34C/problems/POSPROD

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0; i<n; ++i){
			cin>>v[i];
			
		}
		long cp=0, cn=0, cnt;
		for(int i=0; i<n; i++){
			if(v[i]>0){
				cp++;
			}
			if(v[i]<0){
				cn++;
			}
		}
		cnt = cp*(cp-1)/2 + cn*(cn-1)/2;

		cout<<cnt<<endl;
	}
	return 0;
}




