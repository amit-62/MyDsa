#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i=10; i>=0; --i){
		cout<<((num >> i) & 1);
	}
	cout<<endl;
}

int main()
{   
	// //Odd Even check
	// for(int i=0; i<5; i++){
	// 	printBinary(i);
	// 	if(i&1){
	// 		cout<<"Odd"<<endl;
	// 	}
	// 	else cout<<"Even"<<endl;
	// }

	// int a=5;
	// //multiplication -- Left shift
	// cout<<(a<<1)<<" "<<(1<<a)<<endl;
	// //devide --Right shift
	// cout<<(a>>1)<<" "<<(1>>a)<<endl;

	//printing binary of Alphabet
	for(char c='A'; c<='E'; ++c){
		cout<<c<<endl;
		printBinary(c);
	}

	for(char c='a'; c<='e'; ++c){
		cout<<c<<endl;
		printBinary(c);
	}

	//uppercase to lower case 
	//set 5th bit
	//printBinary('A'|(1<<5));
	char u='A';
	char l=u|(1<<5);
	cout<<l<<endl;

	// lowercase to uppercase uset 5th bit
	cout<<char(l & ~(1<<5))<<endl;

	//there is other way to connvert
	//to lower OR with space and to upper AND with underscore(_)
	cout<<char('A' | ' ')<<endl;
	cout<<char('a' & '_')<<endl;

	//clearing LSB and MSB
	//for LSB perform left shift till i+1 and subtract 1 than invert
	int a=59;
	int i=4;
	printBinary(59);
	int b=a & ~((1<<(i+1))-1);
	printBinary(b);

	//clearing MSB till i-th bit
	i=3;
	int c=a & ((1<<(i+1))-1);
	printBinary(c);

	//check power of 2 or not
	// perform AND bw n AND n-1

	int n=16;

	if(n & (n-1)){
		cout<<"not power of 2"<<endl;
	}
	else cout<<"power of 2"<<endl;

	return 0;
}