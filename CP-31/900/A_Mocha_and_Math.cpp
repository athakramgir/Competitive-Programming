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
        vector<int> arr(n); 
        for(auto &it: arr) cin >> it; 
        int total_and = arr[0]; 
        for(int i = 1; i < n; i++) {
            total_and = total_and&arr[i]; 
        }
        cout << total_and << endl; 
    }
    return 0;
}