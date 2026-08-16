#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, s;
        cin >> n >> x >> s;
        string u;
        cin >> u;
        int empty_tables = x;
        int available_seats = 0;
        int total_seated = 0;
        for (int i = 0; i < n; ++i)
        {
            char personality = u[i];

            if (personality == 'I')
            {
                if (empty_tables > 0)
                {
                    empty_tables--;
                    available_seats += (s - 1); 
                    total_seated++;
                }
            }
            else if (personality == 'E')
            {
                if (available_seats > 0)
                {
                    available_seats--;
                    total_seated++;
                }
            }
            else if (personality == 'A')
            {
                if (available_seats > 0)
                {
                    available_seats--;
                    total_seated++;
                }
                else if (empty_tables > 0)
                {
                    empty_tables--;
                    available_seats += (s - 1);
                    total_seated++;
                }
            }
        }
        cout << total_seated << endl; 
    }
    return 0;
}