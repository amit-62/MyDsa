#include<bits/stdc++.h>
using namespace std;
const int N= 1e5;
// int a[N];
int hp[N];
int canRemove[N];
int hsh[N];

vector<int> prFactor(int n){
	vector<int> ans;
	while(n>1){
		int pr_fact=hp[n];
		while (n%pr_fact==0) n/=pr_fact;
		ans.push_back(pr_fact); 
	}
	return ans;
}


int main()
{   
	for(int i=2; i<N; ++i){
		if(hp[i]==0){
			for(int j=i; j<N; j+=i){
				hp[j]=i;
			}
		}
	}
 
	int n,q;
	cin>>n>>q;
	// int<vector> 
	for(int i=0; i<n; ++i){
		int x;
		cin>>x;
 		hsh[x]=1;
	}

	for(int i=2; i<N; ++i){
		if(hsh[i]==1){
			for(long long j=i; j<N; j*=i){
				canRemove[j]=1;
			}
		}
	}

	while(q--){
		int x;
		cin>>x;
		vector<int> pf=prFactor(x);
		bool isPossible=false;
		for(int i=0; i<pf.size(); ++i){
			for(int j=i; j<pf.size(); ++j){
				int product= pf[i]*pf[j];
				if(i==j && x%product!=0) continue;
				int toRemove=x/product;
				if(canRemove[toRemove]==1 || toRemove==1){
					isPossible=true;
					break;
				}
			}
			if(isPossible) break;
		}
		cout<<(isPossible ? "YES\n": "NO\n");

	}
	return 0;
}