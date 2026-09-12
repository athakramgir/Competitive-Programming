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
        for(int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }
        int onesCount = 0; 
        for(int i = 0; i < n; i++) {
            if(arr[i] == 1) {
                onesCount++; 
            }
        }
        if(onesCount > (n-1)/2) cout << "Bessie" << endl; 
        else cout << "Elsie" << endl; 
    }
    return 0;
}