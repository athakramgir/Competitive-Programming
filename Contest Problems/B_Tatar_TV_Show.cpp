#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k; 
        string s; 
        cin >> s; 
        vector<int> arr(k, 0); 
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                arr[i%k] ++; 
            }
        }
        bool ans = true; 
        for(int i = 0; i < k; i++) {
            if(arr[i]&1 != 0) {
                ans = false; 
                break;
            }
        }
        if(ans == true) {
            cout << "YES" << endl; 
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}