//https://www.spoj.com/problems/AGGRCOW/

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int n,cow;
int position[N];

bool minCowDist(int mindst){
	int last_pos=-1;
	int cow_ct=cow;
	for(int i=0; i<n; ++i){
		if(position[i]-last_pos>= mindst || last_pos==-1){
			cow_ct--;
			last_pos=position[i];
		}
		if(cow_ct==0) break;
	}
	return cow_ct==0;

}

int main()
{   
	int t;
	cin>>t;
	while(t--){
		cin>>n>>cow;
		for(int i=0; i<n; ++i){
			cin>>position[i];
		}

		sort(position, position+n);

		int lo=0, hi=1e9, mid;
		while(hi-lo>1){
			mid=(hi+lo)/2;
			if(minCowDist(mid)){
				lo=mid;
			}
			else{
				hi=mid-1;
			}
		}
		if(minCowDist(hi)){
			cout<<hi<<endl;
		}
		else cout<<lo<<endl;
	}
	return 0;
}