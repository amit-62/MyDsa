// A hello world program in C++

#include<bits/stdc++.h>
using namespace std;
int findCircle(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int x12 = x1 - x2;
    int x13 = x1 - x3;
 
    int y12 = y1 - y2;
    int y13 = y1 - y3;
 
    int y31 = y3 - y1;
    int y21 = y2 - y1;
 
    int x31 = x3 - x1;
    int x21 = x2 - x1;
 
    // x1^2 - x3^2
    int sx13 = (x1*x1) - (x3*x3);
 
    // y1^2 - y3^2
    int sy13 = (y1*y1) - (y3*y3);
 
    int sx21 = (x2*x2) - (x1*x1);
    int sy21 = (y2*y2) - (y1*y1);
    if(((y31) * (x12) - (y21) * (x13))==0 ||  ((x31) * (y12) - (x21) * (y13))==0){
    	return 0;
    }
 
    int f = ((sx13) * (x12)
             + (sy13) * (x12)
             + (sx21) * (x13)
             + (sy21) * (x13))
            / (2 * ((y31) * (x12) - (y21) * (x13)));
    int g = ((sx13) * (y12)
             + (sy13) * (y12)
             + (sx21) * (y13)
             + (sy21) * (y13))
            / (2 * ((x31) * (y12) - (x21) * (y13)));
 
    int c = -(x1*x1) - (y1*y1) - 2 * g * x1 - 2 * f * y1;
 
    // eqn of circle be x^2 + y^2 + 2*g*x + 2*f*y + c = 0
    // where centre is (h = -g, k = -f) and radius r
    // as r^2 = h^2 + k^2 - c
    int h = -g;
    int k = -f;
    int sqr_of_r = h * h + k * k - c;

    return sqr_of_r;
 
    // r is the radius
    // float r = sqrt(sqr_of_r);
 
    // cout << "Centre = (" << h << ", " << k << ")" << endl;
    // cout << "Radius = " << r;
}

int main()
{   
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<pair<int,int>> vect;
		for(int i=0; i<n; i++){
			int x,y;
			cin>>x>>y;
			vect.push_back( make_pair(x,y) );
		}
		// for(int i=0; i<n; i++){
		// 	cout<<vect[i].first<<" "<<vect[i].second<<endl;
		// }n
		int p1=vect[0].first; int q1=vect[0].second;
		int p2=vect[1].first; int q2=vect[1].second;
		int p3=vect[2].first; int q3=vect[2].second;
		int r=findCircle(p1,q1,p2,q2,p3,q3);
		// cout<<r<<endl;
		vector<pair<int,int>> vpr;
		int ctr=0;
		for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				int x1=vect[i].first; int y1= vect[i].second;
				int x2=vect[j].first; int y2= vect[j].second;
				int d= (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
				if(2*r==d){
					ctr+=i+(n-1-j);
				}
				// vpr.push_back( make_pair(i,j));
			}
		}
		cout<<ctr<<endl;
		
	}
	return 0;
}




