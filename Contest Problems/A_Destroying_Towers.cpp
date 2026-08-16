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
        for(int i = 0; i < n; i++) cin >> arr[i]; 
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(arr[j] > arr[i]) {
                    arr[j] = arr[i]; 
                }
            } 
        }
        int sum = 0; 
        for(int i = 0; i < n; i++) {
            sum += arr[i]; 
        }
        cout << sum << endl; 
    }
    return 0;
}