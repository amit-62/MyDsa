#include <iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        int arr[n];
        int x = 0, y = 0;
        
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            if (arr[i] == -1){
                x++;
            }
            else{
                y++;
            }
        }
        if (abs(x - y) < 2){
            cout << "YES";
        } else if (abs(x - y) == 2){
            if (x % 2) cout << "NO";
            else cout << "YES";
        }else {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}