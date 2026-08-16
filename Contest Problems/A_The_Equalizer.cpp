#include <bits/stdc++.h>
using namespace std;

bool f(vector<int>& arr, int n, int k) {
    int xor_sum = 0; 
    for(auto it : arr) {
        xor_sum ^= it; 
    }
    if(xor_sum != 0) {
        return true; 
    }
    if(k == 0) {
        for(auto it : arr) {
            if(it > 0) return true; 
           
        }
        return false; 
    }
    return n%2 == 0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, k; 
        cin >> n >> k; 
        vector<int> arr(n, 0); 
        for(int i = 0; i < n; i++){
            cin >> arr[i]; 
        }
        bool all_zero = true; 
        for(auto it : arr){
            if(it != 0) {
                all_zero = false; 
            }
        }
        if(all_zero == true) {
            cout << "YES" << endl; 
            continue; 
        }
        if(f(arr, n, k)) cout << "YES" << endl; 
        else cout << "NO" << endl; 
    }
    return 0;
}