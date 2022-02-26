// maze Prblm of counting path program in C++

#include<bits/stdc++.h>
using namespace std;

int cntPath(int m, int n){
	if(m==1 || n==1){
		return 1;
	}
	if (m==2 && n==2) return 0; //with obstacle or condition

	return cntPath(m,n-1) + cntPath(m-1,n);

}

void prntPath(string p, int m, int n){
	if(m==1 && n==1){
		cout<<p<<endl;
		return;
	}

	if (m==2 && n==2) return; //with obstacle
    
    // char
    if(n>1){ 
    	prntPath(p+'r', m, n-1);
    	
    }
    if(m>1){
    	prntPath(p+'d',m-1, n);
    	
	}
}

void prntPathDignl(string p, int m, int n){
	if(m==1 && n==1){
		cout<<p<<endl;
		return;
	}
    
    // char
    if(n>1 && m>1){
    	prntPathDignl(p+'D', m-1, n-1);
    }
    if(n>1){ 
    	prntPathDignl(p+'H', m, n-1);
    }
    if(m>1){
    	prntPathDignl(p+'V',m-1, n);
	}
}

int main()
{   
	cout<<cntPath(3,3)<<endl;
	string p="";
	prntPath(p,3,3);
	// prntPathDignl(p,3,3);
	return 0;
}