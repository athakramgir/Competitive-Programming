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
        for(int i = 1; i <= n; i++) {
            cin >> arr[i]; 
        }
        if(arr[1] == 1) cout << "YES" << endl; 
        else cout << "NO" << endl; 
    }
    return 0;
}