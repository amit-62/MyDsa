// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& a, int n) {
	for(int i=0; i<a.size(); i++){
		if(a[i]==1) continue;
		if(a[i]==0 && a.size()==1) {a[i]=1; n--; continue;}
		if(i==0 && a[i]==0 && a[i+1]==0) {a[i]=1; n--; continue;}
		if(i==a.size()-1 && a[i]==0 && a[i-1]==0) {a[i]=1; n--; continue;}
		if(i!=0 && i!=a.size()-1 && a[i]==0 && a[i-1]==0 && a[i+1]==0){
			a[i]=1; n--; continue;
		}
		// else continue;

		// cout<<n<<endl;
	} 

	if(n<=0) return true;
	else return false;       
}

int main()
{   
	vector<int> v={1,0,0,0,1};
	cout<<canPlaceFlowers(v,1)<<endl;
	return 0;
}




