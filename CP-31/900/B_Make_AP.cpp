#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c; 
        bool ans = false; 
        // for an AP of 3 terms a b c, 2b = a + c
        long long new_a = 2*b - c; 
        if(new_a/a > 0 && new_a%a == 0) ans = true; // same sign && is there an integer we can multiply? 
        long long new_b = (a + c)/2; 
        if(new_b/b > 0 && new_b % b == 0 && (a+c)%2 == 0) ans = true; // also check if a + c is even. That could be ignored by floor nature of long long division
        long long new_c = 2*b - a;
        if(new_c/c > 0 && new_c % c == 0) ans = true; 
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl; 
    }
    return 0;
}