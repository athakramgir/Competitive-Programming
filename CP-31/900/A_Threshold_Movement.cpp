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
        vector<int> arr(n+1); 
        for(int i = 0; i < n; i++) cin >> arr[i]; 
        if(n%2 == 0) { 
            int a = INT_MIN; 
            int b = INT_MAX; 
            for(int i = 1; i <= n; i++) {
                if(i % 2 == 0) a = max(a, arr[i]); 
                else b = min(b, arr[i]); 
            } 
            if(abs(b - a) >= 2) cout << "YES" << endl; 
            else cout << "NO" << endl; 
        }
        else {
            cout << "NO" << endl; 
        }
    }
    return 0;
}