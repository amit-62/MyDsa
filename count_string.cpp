#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	unordered_map<string,int> m;
	for(int i=0; i<n ; ++i){
		string s;
		cin >>s;
		m[s]=m[s]+1;
	}

	for( auto pr : m){
		if(pr.second == 2){
			cout << pr.first<< endl;
		}
	}
	return 0;
}