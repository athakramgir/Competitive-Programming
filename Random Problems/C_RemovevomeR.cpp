#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int runs = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1])
                runs++;
        }// calculate runs, continuous groups of equal elements

        if (runs == 2)
            cout << 2 << '\n';
        else
            cout << 1 << '\n';
    }

    return 0;
}