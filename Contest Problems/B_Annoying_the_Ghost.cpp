#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n; 
        vector<int> a, b; 
        int max_a = INT_MIN; 
        int max_b = INT_MIN; 
        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
            cin >> b[i]; 
            max_a = max(max_a, a[i]); 
            max_b = max(max_b, b[i]); 
        }
        if(max_a > max_b) { 
            cout << -1 << endl; 
            continue; 
        }
        
    }
    return 0;
}