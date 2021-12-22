#include<bits/stdc++.h>
using namespace std;

int rangeBitwiseAnd(int left, int right) {
	int ans=left;
	for (int i = left; i <=right ; ++i){
    	ans = ans & i;
    }
    return ans;
}

int main()
{   
	int a,b;
	cin>>a>>b;
	cout<<rangeBitwiseAnd(a,b);
	return 0;
}