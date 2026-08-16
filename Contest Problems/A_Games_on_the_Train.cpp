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
        for(int i = 0; i < n; i++) cin >> arr[i];; 
        int maxi = arr[0]; 
        int mini = arr[0];
        for(int i = 1; i < n; i++) {
            if(arr[i] > maxi) maxi = arr[i]; 
            if(arr[i] < mini) mini = arr[i]; 
        } 
        cout << maxi - mini + 1 << endl; 
    }
    return 0;
}