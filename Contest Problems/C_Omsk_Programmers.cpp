#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int a, b, x; 
        cin >> a >> b >> x; 
        int cnt = 0; 
        int min_op = 0; 
        if(x >= a || x >= b) {
            if(abs(a-b) < 2) {
                min_op = abs(a-b); 
                cout << min_op << endl; 
                continue; 
            } 
            else { 
                min_op = 2; 
                cout << min_op << endl; 
                continue; 
            }
        }
        else if(a > b) { 
            while(a > x && a >= b && abs(a-b) > abs(a/x - b)) { 
                a = a/x; 
                cnt++; 
            }
            cnt += abs(a-b); 
        }
        else if(b > a) {
            while(b > x && b >= a && abs(b-a) > abs(b/x - a)) {
                b = b/x; 
                cnt++; 
            }
            cnt += abs(b-a); 
        }
        min_op += cnt; 
        cout << min_op << endl;
    }
    return 0;
}