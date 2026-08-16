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
        for(int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }
        int op_count = 0; 
        sort(arr.begin(), arr.end()); 
        for(int i = 0; i < n/2; i++) {
            if(arr[i] != arr[n-i-1]){ 
                op_count ++; 
            }
        } 
        cout << op_count << endl;
    }
    return 0;
}