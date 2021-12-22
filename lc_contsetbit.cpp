#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> v(N);

int main()
{   
    for(int i=0; i<N; ++i){
    	int ct=0;
    	for(int j=31; j>=0; j--){
    		if((i & (1<<j))!=0){
    			ct++;
    		}
    	}
    	v[i]=ct;
    }

    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
    	cout<<v[i]<<endl;
    }
	return 0;
}

