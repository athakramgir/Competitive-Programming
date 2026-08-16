#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n , k; 
        cin >> n >> k;  

        vector<long long> arr(n); 
        for(int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }
        long long largest_length = 1; 
        long long counter = 1; 
        sort(arr.begin(), arr.end()); 
        for(int i = 1; i < n; i++) {
            if(abs(arr[i] - arr[i-1]) <= k) {
                counter++; 
            }
            else{
                counter = 1; 
            }
            largest_length = max(largest_length, counter); 
        }
        cout << n - largest_length << endl; 
    }
    return 0;
}