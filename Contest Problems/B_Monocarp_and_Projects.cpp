#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin >> x >> y >> k;

        long long d = y - x;
        long long lo = x;
        long long hi = x + k - 1;

        long long ans = 0;
        long long upper = min(hi, d);
        for (long long a = lo; a <= upper; a++) {
            ans += d % a;
        }
        long long fullLo = max(lo, d + 1);
        if (hi >= fullLo) {
            long long count = hi - fullLo + 1;
            ans += count * d;
        }

        cout << ans << "\n";
    }
    return 0;
}