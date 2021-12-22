#include<bits/stdc++.h>
using namespace std;

double eps=1e-6;

int main()
{   
	double x;
	cin>>x;
	double lo=1, hi=x, mid;
	while(hi-lo>eps){
		mid=(hi+lo)/2;
		if(mid*mid>x){       //change here to get any paower.
			hi=mid;
		}
		else lo=mid;
	}
	cout<<setprecision(10)<< hi;
	return 0;
}