//https://www.codechef.com/problems/TRICOIN
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int v[N];

int main()
{   
	int a=0;
	for(int i=0; i<N; i++){
		a=a+i;
		v[i]=a;
		// cout<<a<<endl;
		// v.push_back(a);
	}
	// for(auto x:v){
	// 	cout<<x<<endl;
	// }
	int q;
	cin>>q;
	while(q--){
		int to_find;
		cin>> to_find;
		int lo=0, hi=N-1;
		int mid;
		while(hi-lo>1){
			int mid= (hi+lo)/2;
			if(v[mid] < to_find ){
				lo=mid + 1;
			}
			else{
				hi = mid;
			}
		}
		if(v[lo]==to_find){
			cout<< lo<<endl;
		}
		else if(v[hi]==to_find){
			cout << hi<<endl;
		}
		else if(to_find<v[lo]){
			cout<<lo-1<<endl;
		}
		else cout<<lo<<endl;	
	}
	return 0;
}