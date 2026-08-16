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
        for(auto &it : arr) cin >> it; 
        long long ans = 0; 
        for(int i = n-2; i >= 0; i--) {
            while(arr[i] >= arr[i+1]) {
                ans++; 
                arr[i] /= 2; 
                if(arr[i] == 0) break; 
            }
            if(arr[i] == 0 && arr[i+1] == 0) {
                ans = -1;
                break;
            }
        }
        cout << ans << endl; 
    }
    return 0;
}