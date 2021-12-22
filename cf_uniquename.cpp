#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<string, int> m;
	for(int i=0; i<n; i++){
		string s;
		cin>> s;
		m[s]=m[s]+1;

		if(m[s]>1){
			cout<< s + to_string(m[s]-1)<<endl;
		}
		else{
			cout<<"OK"<<endl;
		}
	}
	return 0;
}