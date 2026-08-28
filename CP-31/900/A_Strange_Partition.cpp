#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n, x; 
        cin >> n >> x; 
        vector<long long> arr(n);
        long long max_beauty = 0; 
        long long min_beauty = 0; 
        for(int i = 0; i < n; i++){
            cin >> arr[i]; 
            max_beauty += ceil((double)(arr[i])/x);
            min_beauty += arr[i]; 
        }
        min_beauty = ceil((min_beauty*1.0)/x); 
        cout << min_beauty << " " << max_beauty << endl; 
    }
    return 0;
}