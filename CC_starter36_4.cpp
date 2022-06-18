// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%2) cout<<1<<endl;
		else{
			map<int,int> mp;

			int c=2;
		    while(n>1)
		    {
		        if(n%c==0){
		        	// cout<<c<<" ";
		        	mp[c]++;
		       		n/=c;
		        }
		        else c++;
		    }

		    if(mp[2]%2!=0){
		    	cout<<-1<<endl;
		    }
		    else if(mp[2]%2==0 && mp.size()==1) {
		    	cout<<1<<endl;
		    }
		    else{
		    	cout<<2<<endl;
		    }
		}
	}
	return 0;
}




