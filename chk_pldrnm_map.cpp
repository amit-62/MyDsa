#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>> t;
	while(t--){
		int n;
		int q;
		cin>>n>>q;
		string s;
		cin>> s;
		map<char, int> m;

		while(q--){
			int l,r;
			cin>>l>>r;
			int oddct=0;
			for(int i=l-1; i<=r-1; ++i){
				cout<<s[i]<<endl;
				m[s[i]] =m[s[i]] +1;
		    }
			for( auto pr : m){
				cout << pr.first<< pr.second<< endl;
				}		//l--;r--;
			for(int i=l-1; i<=r-1; ++i){
				if(m[s[i]]%2!=0) oddct++;

			}
			//cout<<oddct;
			if(oddct>1) cout<< "NO \n";
			else cout<< "YES\n";
		}
	}
	return 0;
}