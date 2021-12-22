//Finding prime using Sieve of Aristhomas..
//Highest & lowest prime factor 
//All prime factor
//Number of prime fCTORr

#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
vector<bool> isPrime(N,1);
vector<int> hp(N,0);
vector<int> lp(N,0);

int main()
{   
	isPrime[0]=isPrime[1]=false;
	for(int i=2; i<N; ++i){
		if(isPrime[i]==true){
			hp[i]=lp[i]=i;
			for(int j=2*i; j<N; j+=i){
				isPrime[j]=false;
				hp[j]=i;
				if(lp[j]==0){
					lp[j]=i;
				}
			}
		}
	}
	
	// for(int i=1; i<=10; ++i){
	// 	// cout<<isPrime[i]<<endl; //to check prime
	// 	cout<<lp[i]<<" "<<hp[i]<<endl;
	// }

	//For prime Factor;
	int n;
	cin>>n;
	vector<int> v_factor;
    map<int, int> ct_factor;
	while(n>1){
		int pr_factor=hp[n];
		while(n%pr_factor==0){
			v_factor.push_back(pr_factor);//for prime factors
			n /= pr_factor;
			ct_factor[pr_factor]++; //to store no of factor
		}
	}
    
    // to print prime factor
	for (auto it:v_factor)
	{
		cout<<it<<" ";
	}
	cout<<endl;

	//for counting no of factor occuring
	for(auto it : ct_factor){
		cout<<it.first<<" "<<it.second<<endl;
	}
	return 0;
}


