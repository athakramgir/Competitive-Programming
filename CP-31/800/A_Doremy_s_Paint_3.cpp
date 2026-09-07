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
        vector<int> arr(n); 
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        unordered_map<long long, long long> mpp; 
        for(int i = 0; i < n; i++) {
            mpp[arr[i]] ++; 
        }
        if(mpp.size() >= 3){
            cout << "No" << endl; 
        }
        else {
            int first = mpp.begin()->second; 
            int second; 
            auto lastIt = mpp.begin(); 
            for(auto i = mpp.begin(); i != mpp.end(); i++) {
                lastIt = i; 
            }
            second = lastIt->second; 
            if(abs(first - second) > 1) {
                cout << "No" << endl; 
            }
            else {
                cout << "Yes" << endl; 
            }
        }
        
    }
    return 0;
}