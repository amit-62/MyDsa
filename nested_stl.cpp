//program to store mark in nested stl... hackerank https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<int, multiset<string>> m;
	for(int i=0; i<n; ++i){
		int marks;
		string name;
		cin>>name >> marks;
		m[-1*marks].insert(name);
	}
	for(auto c_it : m){
		auto &students = c_it.second;
		auto marks = c_it.first;
		for(auto student : students){
			cout << student <<" "<<-1*marks<<endl;
		}
	}
	// auto c_it = --m.end();
	// while(true){
	// 	auto &students = (*c_it).second;
	// 	auto marks = (*c_it).first;
	// 	for(auto student : students){
	// 		cout << student <<" "<<marks<<endl;
	// 	}
	// 	if(c_it == m.begin()) {
	// 		break;
	// 	}	
	// 	c_it--;
	// }
	return 0;
}



