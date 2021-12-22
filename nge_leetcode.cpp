// https://leetcode.com/problems/next-greater-element-i/

#include<bits/stdc++.h>
using namespace std;
 

int main()
{
	vector<int> v,v1;
	int n;
	cin >> n;
	for(int i=0; i<n; ++i){
		int x;
		cin >> x;
		v.push_back(x);
	}
	int n2;
	cin >> n2;
	for(int i=0; i<n2; ++i){
		int x;
		cin >> x;
		v1.push_back(x);
	}

	stack<int> st;
	vector<int> v_out(v.size());
	for(int i=0; i<v.size(); ++i){
		while(!st.empty() && v[i]>v[st.top()]){
			v_out[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		v_out[st.top()]=-1;
		st.pop();
	}
	unordered_map<int, int> m;
	for(int i=0; i<v.size(); ++i){
		//cout << v[i] << " " <<(v_out[i]==-1 ? -1 : v[v_out[i]])<<endl;
		m[v[i]]=(v_out[i]==-1 ? -1 : v[v_out[i]]);
	}
	// for(auto c_it : m){
	// 	cout<< c_it.first<<" "<<c_it.second<<endl;
	// }
	//cout<<9;
	for(int i=0; i<v1.size(); ++i){
		cout<< v1[i]<<" "<<m[v1[i]]<<endl;
	}
	return 0;
}
