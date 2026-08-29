#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n; 
        cin >> n; 
        vector<long long> arr(n); 
        for(int i = 0; i < n; i++) cin >> arr[i]; 
        int ans = __gcd(arr[0], arr[n-1]); 
        cout << ans << endl; 
    }
    return 0;
}