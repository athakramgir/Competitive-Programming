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
        int sz = n*k; 
        vector<int> arr(sz+1); 
        for(int i = 0; i < sz; i++) {
            cin >> arr[i]; 
        }
        long long ans = 0; 
        // sort(arr.begin(), arr.end()); 
        long long i = sz; 
        while(k--) {
            i = i - (n/2 + 1); 
            ans += arr[i]; 
        }
        cout << ans << endl; 
    }
    return 0;
}