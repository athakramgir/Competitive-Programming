#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n = 0; 
        cin >> n; 
        vector<int> arr(n); 
        for(auto &it : arr) cin >> it;
        int count_zeroes = 0; 
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                count_zeroes += 1;
            }
        }
        int left = 0; 
        int right = n-1; 
        while(arr[left] == 0) left++; 
        while(arr[right] == 0) right--; 

        bool found = false; 
        for(int i = left; i <= right; i++) {
            if(arr[i] == 0) found = true; 
        }
        if(count_zeroes == n) cout << 0 << endl; 
        else if(found == false) cout << 1 << endl; 
        else cout << 2 << endl; 
    }
    return 0;
}