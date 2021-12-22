#include<bits/stdc++.h>
using namespace std;


void toh(int disk, int start, int end){
	if (disk==1){
		cout<<start<<" -- "<<end<<endl;
	}
	else{
		int other= 6-(start+end);
		toh(disk-1, start, other);
		cout<<start<<" -- "<<end<<endl;
		toh(disk-1, other, end);
	}	
}



int main()
{   
	// int disk;
	// cin>>disk;
	toh(2,1,3);

	
	return 0;
}
