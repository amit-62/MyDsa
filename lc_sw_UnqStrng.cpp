// https://leetcode.com/problems/longest-substring-without-repeating-characters/

#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
	int i=0;
	int j=0;
	int ans=INT_MIN;
	if(s.length()==0) return 0;
	unordered_map<char, int> m;
	while(j<s.length()){
		m[s[j]]++;
		if(m.size()==j-i+1){
			ans = max(ans, j-i+1);
			j++;
		}
		else if(m.size()<j-i+1){
			while(m.size()<j-i+1){
				m[s[i]]--;
				if(m[s[i]]==0) m.erase(s[i]);
				i++;
			}
			j++;
		}
	}
	return ans;        
}

int main()
{   
	string s = "";
	cout<<lengthOfLongestSubstring(s);
	return 0;
}