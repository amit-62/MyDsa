// https://leetcode.com/problems/number-of-good-ways-to-split-a-string

#include<bits/stdc++.h>
using namespace std;

int numSplits(string s) {

	int n=s.size();
	int pref[n], suff[n];

	map<char,int> freq;

	for(int i=0; i<n-1; i++){
		freq[s[i]]++;
		pref[i]=freq.size();
	}

	freq.clear();

	for(int i=n-1; i>=0; i--){
		freq[s[i]]++;
		suff[i]=freq.size();
	}

	int cnt=0;

	for(int i=0; i<n-1; i++){
		if(pref[i]==suff[i+1]){
			cnt++;
		}
	}

	return cnt;
        
}

int main()
{   
	string s="aacaba";
	cout<<numSplits(s);
	return 0;
}




