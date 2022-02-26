// maze problem with backtracking program in C++

#include<bits/stdc++.h>
using namespace std;

void prntPath(string p, int m, int n, int maze[3][3], int r, int c){
	if(r==(m-1) && c==(n-1)){
		cout<<p<<endl;
		return;
	}

	// if (m==2 && n==2) return; //with obstacle
	if(!maze[r][c]){
		return;
	}
    
    maze[r][c]=false;
    // char
    if(c<(n-1)){ 
    	prntPath(p+'R', r, c+1);
    	
    }
    if(r<(m-1)){
    	prntPath(p+'D',r+1, c);
    	
	}
	if(c>0){
    	prntPath(p+'L',r, c-1);
    	
	}
	if(r<0){
    	prntPath(p+'U',r-1, c);
    	
	}

	maze[r][c]=true;

}

int main()
{   
	int m,n;
	cin>>m>>n;
	bool maze[m][n] =  {{true, true, true},
						{true, true, true}, 
						{true, true, true} };
	// // int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
	// int r=(sizeof(maze)/sizeof(maze[0]));
	// int c=(sizeof(maze)/sizeof(maze[0][0]))/r;					

	// cout<<r<<sizeof(maze[0][0])<<c;
	string p="";
	int r=0,c=0;
	prntPath(p, m, n, maze[3][3], r, c);					

	return 0;
}