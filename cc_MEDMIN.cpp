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
		vector<int> a(n);
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		sort(a.begin(), a.end());

		int m=(a.size()+1)/2;
		int ans=a[m-1]-a[m-2];
		cout<<ans<<endl;
	}
	return 0;
}




