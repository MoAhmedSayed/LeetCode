            if (s[i] == s[i + 1]) {
                memo[i][i + 1] = true;
                ans = {i, i + 1};
            }
        }
        for (int diff = 2; diff < n; ++diff) {
            for (int i = 0; i < n - diff; ++i) {
                int j = i + diff;
                if (s[i] == s[j] && memo[i + 1][j - 1]) {
                    memo[i][j] = true;
                    ans = {i, j};
                }
            }
        }
        int i = ans[0];
        int j = ans[1];
        return s.substr(i, j - i + 1);
    }
};
"
