// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;

int main()
{   
	int t;
	cin>>t;
	while(t--){
		long long h;
		long long s;
		cin>>h>>s;
		double a=1ll*h*h-4*s;
		double b=1ll*h*h+4*s;

		if(a<0) cout<<-1<<endl;
		else{
			double x=1.0*abs(sqrt(a)+sqrt(b))/2;
			double y=1.0*abs(sqrt(a)-sqrt(b))/2;

			if(x>y) swap(x,y);

			cout<<fixed<<setprcision(5)<<x<<" "<<y<<" "<<1.0*h<<endl;
		}

	}
	return 0;
}




