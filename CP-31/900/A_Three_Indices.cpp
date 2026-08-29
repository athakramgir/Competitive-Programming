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
        for(int i = 1; i <= n; i++) cin >> arr[i]; 
        int i = -1, j = -1, k = -1; 
        for(int ind = 2; ind <= n-1; ind++) {
            if(arr[ind-1] < arr[ind] && arr[ind+1] < arr[ind]){
                i = ind-1; 
                j = ind; 
                k = ind+1; 
                break; 
            }
        }
        if(i != -1) {
            cout << "YES" << endl;
            cout << i << " " << j << " " << k << endl;  
        }
        else { 
            cout << "NO" << endl; 
        }
    }
    return 0;
}