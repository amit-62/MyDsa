// Printing star using recursion

#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void prntStar(int r, int c){
	if(r==0){
		return;
	}
	if(c<r){
		cout<<"* ";
		prntStar(r, c+1);
	}
	else{
		cout<<endl;
		prntStar(r-1, 0);
	}
}

void prntStar1(int r, int c){
	if(r==0){
		return;
	}
	if(c<r){
		prntStar1(r, c+1);
		cout<<"* ";
	}
	else{
		prntStar1(r-1, 0);
		cout<<endl;
	}
}



int main()
{   
	
	int r=4;
	// cin>>r;
	prntStar(r,0);
	prntStar1(r,0);

	
	return 0;
}