int longestBalanced(string s)
{
    int longestBalanced(string s)
    {
        string tanqorivel = s;
        int n = s.size();
        int total0 = count(s.begin(), s.end(), '0');
        int total1 = n - total0;
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + (s[i] == '1' ? 1 : -1);
        }

        unordered_map<int, int> firstSeen;
        firstSeen[0] = 0;
        int ans = 0;

        for (int j = 1; j <= n; j++)
        {
            int val = prefix[j];
            if (firstSeen.count(val))
            {
                ans = max(ans, j - firstSeen[val])
            }
            if (firstSeen.count(val - 2) && total0 > 0)
                ans = max(ans, j - firstSeen[val - 2]);
            if (firstSeen.count(val + 2) && total1 > 0)
                ans = max(ans, j - firstSeen[val + 2]);
            if (!firstSeen.count(val))
                firstSeen[val] = j;
        }

        return ans;
    }
}