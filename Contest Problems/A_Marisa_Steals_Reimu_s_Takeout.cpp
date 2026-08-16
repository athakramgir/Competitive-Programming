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
        vector<int> arr(n, 0);
        for(int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }
        int c0 = 0, c1 = 0, c2 = 0; 
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) c0++; 
            else if(arr[i] == 1) c1++; 
            else c2++; 
        }
        int ans = c0; 
        int pairs = min(c1, c2); 
        ans += pairs; 
        c1 -= pairs; 
        c2 -= pairs; 
        ans += c1/3 + c2/3; 
        cout << ans << endl; 
    }
    return 0;
}