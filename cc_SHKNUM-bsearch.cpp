// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;
// const int N=1e5+10;
set<long long> st;

void calPow(){
	for(int i=0; i<=30; i++){
		for(int j=0; j<=30; j++){
			if(i==j){
				continue;
			}
			else{
				st.insert((1<<i)+(1<<j));
			}
		}
	}
}



int main()
{   
	int t;
	cin>>t;
	calPow();
	while(t--){
		long long n;
		cin>>n;
// 		calPow();
		auto x=st.lower_bound(n);
		auto y=st.upper_bound(n);
		y--;

		// cout<<(*x)<<" "<<(*y)<<endl;
// 		long long a;
// 		long long b;
// 		if(x != st.end()){
// 			a=(*x);
// 		}
// 		if(y != st.end()){
// 			b=(*y);
// 		}
		cout<<min(1ll*abs(n-*x), 1ll*abs(n-*y))<<endl;
		
	}
	return 0;
}




