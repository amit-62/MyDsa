// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
#include<bits/stdc++.h>
using namespace std;

int numberOfSubstrings(string s) {
	int i=0;
	int j=0;
	int cnt=0;
	unordered_map<char, int> m;
	while(j<s.length()){
		m[s[j]]++;
		while(m.size()==3){
			cnt += s.length()-j;
			m[s[i]]--;
			if(m[s[i]]==0) m.erase(s[i]);
			i++;
		}
		j++;
	}
	return cnt;
}

int main()
{   
	string s="aaabc";
	cout<<numberOfSubstrings(s);
}