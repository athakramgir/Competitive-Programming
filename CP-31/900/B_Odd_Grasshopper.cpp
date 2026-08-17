#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long x, n; 
        cin >> x >> n; 
        long long final_pos; 
        if(n % 4 == 1) {
            final_pos = -n; 
        }
        else if(n % 4 == 2) {
            final_pos = 1;
        }
        else if(n % 4 == 3) {
            final_pos = n + 1; 
        }
        else {
            final_pos = 0;  
        }
        if(x%2 == 0) {
            cout << x + final_pos << endl; 
        }
        else {
            cout << x - final_pos << endl; 
        }
        
    }
    return 0;
}