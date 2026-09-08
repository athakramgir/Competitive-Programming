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
        for(int i = 0; i < n; i++) cin >> arr[i]; 
        int zeroes = 0; 
        for(int i = 1; i < n-1; i++) {
            if(arr[i] == 0) zeroes++; 
        }
        int ans = 0; 
        int first = arr[0], last = arr[n-1]; 
        if(first == 0 && last == 0){
            ans = 0; 
        }
        else if(first == 1 && last == 1) {
            ans = (zeroes >= 2) ? 2 : -1; 
        }
        else {
            ans = (zeroes >= 1) ? 1 : -1; 
        }
        cout << ans << endl; 
    }
    return 0;
}