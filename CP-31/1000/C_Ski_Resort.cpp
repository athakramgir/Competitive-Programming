#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n, k, q; 
        cin >> n >> k >> q; 
        vector<long long> arr(n); 
        for(auto &it : arr){
            cin >> it; 
        }
        for(int i = 0; i < n; i++) {
            if(arr[i] <= q) 
                arr[i] = 1; 
            else
                arr[i] = 0; 
        }
        long long countOnes = 0; 
        long long ways = 0; 
        for(int i = 0; i < n; i++) {
            if(arr[i]){
                countOnes++; 
            }
            else{
                if(countOnes >= k) {
                    long long diff = countOnes - k + 1; 
                    ways += (diff*(diff+1))/2; 
                }
                countOnes = 0; 
            }
        }
        if(countOnes >= k) {
            long long diff = countOnes - k + 1; 
            ways += (diff*(diff+1))/2; 
        }
        cout << ways << endl; 
    }
    return 0;
}