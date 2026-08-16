#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t; 
    while(t--) {
        long long n; 
        cin >> n;
        long long arr[n]; 
        long long xr = 0; 
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            xr ^= arr[i];
            continue; 
        }
        if(xr == 0) {
            cout << 1 << endl; 
            cout << 1 << " " << n << endl;
        }
        if(n%2 == 0) {
            cout << 2 << endl; 
            cout << 1 << " " << n << endl; 
            cout << 1 << " " << n << endl; 
        }
        else {
            cout << 4 << endl; 
            cout << 1 << " " << n-1 << endl; 
            cout << 1 << " " << n-1 << endl;
            cout << n -1 << " " << n << endl;
            cout << n - 1 << " " << n - 1 << endl;  
        }
    }
    return 0;
}

