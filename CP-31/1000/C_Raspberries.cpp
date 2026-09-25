#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n, k; 
        cin >> n >> k; 
        vector<int> arr(n); 
        for(auto &it : arr) cin >> it; 
        long long ans = INT_MAX; 
        long long evenCount = 0; 
        for(int i = 0; i < n; i++) {
            if(arr[i]%k == 0) ans = 0; 
            if(arr[i]%2 == 0) evenCount++; 
            ans = min(ans, k - arr[i]%k); 
        }
        if(k==4) {
            if(evenCount >= 2) {
                ans = min(ans, 0LL); 
            } 
            else if(evenCount == 1) {
                ans = min(ans, 1LL); 
            }
            else if(evenCount == 0) {
                ans = min(ans, 2LL);
            }
        }
        cout << ans << endl; 
    }
    return 0;
}