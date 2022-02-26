// generatin number inn dice in C++

#include<bits/stdc++.h>
using namespace std;

void genNo(string p, int target){
	if(target==0){
		cout<< p<<endl ;
		return ;
	}

	for(int i=1; i<=6 && i<=target; i++){
		genNo(p+i, target-i);
	}
}

int main()
{   
	string a="";
	int n;
	cin>>n;
	genNo(a,n);
	return 0;
}