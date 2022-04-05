#include<bits/stdc++.h>
using namespace std; 
  
struct Point 
{ 
    int x, y; 
}; 

Point p0; 
  

int distance(Point p1, Point p2) 
{ 
    return (p1.x - p2.x)*(p1.x - p2.x) + 
          (p1.y - p2.y)*(p1.y - p2.y); 
} 

void swap(Point &a, Point &b) 
{ 
    Point temp = a; 
    a = b; 
    b = temp; 
}

 Point St_top(stack<Point> &St) 
{ 
    Point p = St.top(); 
    St.pop(); 
    Point result = St.top(); 
    St.push(p); 
    return result; 
} 
  

   
int orders(Point p, Point q, Point r) 
{ 
    int value = (q.y - p.y) * (r.x - q.x) - 
              (q.x - p.x) * (r.y - q.y); 
  
    if (value == 0) return 0;  
    return (value > 0)? 1: 2; 
} 
   
int compare(const void *ap1, const void *ap2) 
{ 
   Point *p1 = (Point *)ap1; 
   Point *p2 = (Point *)ap2; 
   
   int order = orders(p0, *p1, *p2); 
   if (order == 0) 
     return (distance(p0, *p2) >= distance(p0, *p1))? -1 : 1; 
  
   return (order == 2)? -1: 1; 
} 
  
stack<Point> pointbetween(Point points[], int n) 
{ 
   int y_min = points[0].y, min = 0; 
   for (int i = 1; i < n; i++) 
   { 
     int y = points[i].y; 
  
     if ((y < y_min) || (y_min == y && 
         points[i].x < points[min].x)) 
        y_min = points[i].y, min = i; 
   } 
  
    
   swap(points[0], points[min]); 
  
   p0 = points[0]; 
   qsort(&points[1], n-1, sizeof(Point), compare); 
   
   int m = 1;
   for (int i=1; i<n; i++) 
   {
       while (i < n-1 && orders(p0, points[i], 
                                    points[i+1]) == 0) 
          i++; 
  
  
       points[m] = points[i]; 
       m++; 
   } 
  
   stack<Point> St; 
   St.push(points[0]); 
   St.push(points[1]); 
   St.push(points[2]); 
   
   for (int i = 3; i < m; i++) 
   { 
      while (St.size()>1 && orders(St_top(St), St.top(), points[i]) != 2) 
         St.pop(); 
      St.push(points[i]); 
   } 
     
    return St; 
} 
   
double polygonArea(vector<int> X, vector<int> Y, int n) 
{ 
    double area = 0.0; 
    int j = n - 1; 
    for (int i = 0; i < n; i++) 
    { 
        area += (X[j] + X[i]) * (Y[j] - Y[i]); 
        j = i; 
    } 
   
    return abs(area / 2.0); 
} 
 
int main() 
{ 
    int n; 
    cin >> n; 
    Point 
    points[n]; 
 
    if (n <= 2){ 
        cout << 0; 
    } 
 
 
    for (int i=0; i<n; i++){ 
        cin >> points[i].x >> points[i].y; 
    } 
 
    stack<Point> s = pointbetween(points, n); 
    vector<int> x, y; 
 
    while (!s.empty()){ 
        Point cur = s.top(); 
        s.pop(); 
        x.push_back(cur.x); 
        y.push_back(cur.y); 
    } 
 
    cout << polygonArea(x, y, x.size()); 
    return 0; 
}




