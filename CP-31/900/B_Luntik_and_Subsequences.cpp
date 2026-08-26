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
        long long sum = 0; 
        for(auto &it : arr){
            cin >> it; 
            sum += it; 
        }
        long long ones = 0; 
        long long zeroes = 0; 
        for(int i = 0; i < n; i++) {
            ones = arr[i] == 1 ? ones+1 : ones; 
            zeroes = arr[i] == 0 ? zeroes+1 : zeroes;
        }
        long long ways = (pow(2, zeroes))*ones;
        cout << ways << "\n"; 
    }
    return 0;
}