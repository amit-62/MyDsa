// https://www.codechef.com/problems/BFTT

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=n+1; i<=(n+1000); i++){
			int cnt=0;
			int x=i;
			while(x>0){
				int r=x%10;
				if(r==3) cnt++;
				x/=10;
				
			}
			// cout<<i<<" "<<cnt<<endl;
			if(cnt<3){    
				continue;
			}
			else{
				cout<<i<<endl;
				break;
			}
		}
	}
	return 0;
}




