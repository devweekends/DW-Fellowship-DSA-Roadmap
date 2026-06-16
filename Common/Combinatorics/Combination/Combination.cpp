#include <bits/stdc++.h>
using namespace std;

/*
------------------------------------------
🔹 Approach 1: Factorial-Based nCr
- Uses n!, r!, (n-r)!
- Simple but can overflow easily
------------------------------------------
*/
long long factorial(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++)
        res *= i;
    return res;
}

long long nCr1(int n, int r) {
    return factorial(n) /
           (factorial(r) * factorial(n - r));
}

/*
------------------------------------------
🔹 Approach 2: Optimized Multiplicative Formula
- Avoids full factorial calculation
- Reduces overflow risk
------------------------------------------
*/
long long nCr2(int n, int r) {
    if (r > n - r)
        r = n - r;

    long long res = 1;

    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

/*
------------------------------------------
🔹 Approach 3: Pascal's Triangle (Iterative DP)
- Builds row by row
- Based on recurrence:
  nCr = (n-1)C(r-1) + (n-1)C(r)
------------------------------------------
*/
long long nCr3(int n, int r) {
    vector<vector<long long>> dp(n + 1,
        vector<long long>(r + 1, 0));

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, r); j++) {
            if (j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i - 1][j - 1] +
                           dp[i - 1][j];
        }
    }

    return dp[n][r];
}

/*
------------------------------------------
🔹 Approach 4: Recursive nCr
- Based on identity:
  nCr = (n-1)C(r-1) + (n-1)C(r)
- Exponential time complexity
------------------------------------------
*/
long long nCr4(int n, int r) {
    if (r == 0 || r == n)
        return 1;

    return nCr4(n - 1, r - 1) +
           nCr4(n - 1, r);
}

/*
------------------------------------------
🔹 Approach 5: DP (Memoization)
- Optimized recursive solution
- Avoids repeated calculations
------------------------------------------
*/
long long dp[100][100];

long long nCrMemo(int n, int r) {
    if (r == 0 || r == n)
        return 1;

    if (dp[n][r] != -1)
        return dp[n][r];

    return dp[n][r] =
        nCrMemo(n - 1, r - 1) +
        nCrMemo(n - 1, r);
}