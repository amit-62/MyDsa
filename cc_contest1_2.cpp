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
		v[0]=n;
		for(int i=1; i<n; ++i){
			v[i]=i;
		}

		for(auto it:v){
			cout<<it<<" ";
		}
		cout<<endl;
	}
	return 0;
}
