#include<bits/stdc++.h>
using namespace std;
vector<int> v;

//for bubble sort..

void BubbleSrt(vector<int> &v, int r, int c){
	if(r==0){
		return;
	}
	if(c<r){
		if(v[c]>v[c+1]){
			//swap
			int temp=v[c];
			v[c]=v[c+1];
			v[c+1]=temp;
		}
		BubbleSrt(v, r, c+1);
	}
	else{
		
		BubbleSrt(v, r-1, 0);
	}
}

int main()
{   
	int n;
	cin>>n;
	// vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		int c;
		cin>>c;
		v.push_back(c);
	}
	// cout<<endl;
	BubbleSrt(v, n, 0);
	for(auto it:v){
		cout<<it<<" ";
	}
	return 0;
}