#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t; 
    while(t--) {
        long long n, k, x; 
        cin >> n >> k >> x; 

        long long up = (n*(n+1))/2 - ((n-k)*(n-k+1))/2; 
        long long low = (k*(k+1))/2; 

        if(x <= up && x >= low) {
            cout << "YES" << endl; 
        }
        else {
            cout << "NO" << endl; 
        }
    }
    return 0;
}