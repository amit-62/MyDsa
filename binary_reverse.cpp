#include<bits/stdc++.h>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t ans=0;
    for(int i=0,j=31; i<32,j>=0; ++i,--j){
    	if(((1<<i)&n)!=0){
    		ans=ans+(1<<j);
    	}
    }
    return ans;
}

int main()
{   
	uint32_t a;
	cin>>a;

	cout<<reverseBits(a);
	return 0;
}