#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i=5; i>=0; --i){
		cout<<((num >> i) & 1);
	}
	cout<<endl;
}

int main()
{   
	// printBinary(4);

	// to get idea of working of right shift..
	// for(int i=5; i>=0; --i){
	// 	cout<<4<<" "<<i<<" "<<((4>>i)&1)<<endl;
	// }
	// cout<<(4>>5);

 	int a=9;
 	printBinary(9);
 	int p=2;
 	//to check set bit or not set bit
 	if((a & (1<<5))!=0){
 		cout<<"set bit\n";
 	}
 	else{
 		cout<<"not set bit\n";
 	}
    
    //set bit at 2nd position
 	printBinary(a | (1<<2));

 	//to unset bit 2nd position
 	printBinary(a & (~(1<<3)));

 	//toggle
 	printBinary(a ^ (1<<2));

 	// to count set bit
 	int ct=0;
 	for(int i=5; i>=0; --i){
 		if((a & (1<<i))!=0){
 			ct++;
 		}
 	}
 	cout<<ct<<endl;

	return 0;
}
