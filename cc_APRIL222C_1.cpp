// https://www.codechef.com/APRIL222C/problems/CHEAPFOOD

#include<bits/stdc++.h>
using namespace std;

int calMax(){
	int n;
	cin>>n;
	int cpn=n/10;
	if(cpn>100) cout<<cpn<<endl;
	else cout<<100<<endl;
}

int main()
{   
	int t;
	cin>>t;
	while(t--){
		calMax();
	}
	return 0;
}




