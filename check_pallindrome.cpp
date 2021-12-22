#include<bits/stdc++.h>
using namespace std;
const int N= 1e5+10;
int hsh[N][26];

int main()
{   
	int t;
	cin>> t;
	while(t--){
		int n, q;
		cin >> n>> q;
		string s;
		cin >> s;
		for(int i=0; i<n; ++i){
			hsh[i+1][s[i]-'a']++;
		}

		for(int i=0; i<26; ++i){
			for(int j=0; j<n; ++j){
				hsh[j][i] += hsh[j-1][i];
			}
		}
		while(q--){
			int l,r;
			cin >> l >> r;
			int oddct=0;
			for(int i=0; i<26; i++){
				int charct= hsh[r][i]-hsh[l-1][i];
				if(charct%2!=0) oddct++;
			}
			if(oddct>1) cout<< "NO \n";
			else cout<< "YES\n";

		}
	}
	return 0;
}