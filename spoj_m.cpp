#include<bits/stdc++.h>
using namespace std;

int mod(long int a){
		int modulo=0;
		for(int i=1; i<=a ; ++i){
			modulo=modulo + a %  i;

		}

		return modulo;
	}


int main()
{
	
	long int l,r;
	int sum=0, s1=0;
	cin >>l>>r;

	for (long int i = l; i <= r; ++i)
	 {
	 	if(mod(i)==mod(i-1)){
	 		//sum= sum +i;
	 		cout<< i << "yes";
	 	}
	 	//s1=s1+sum;
	 } 
	 //cout<< s1;
	return 0;
}