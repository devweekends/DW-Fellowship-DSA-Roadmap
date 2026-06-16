#include <bits/stdc++.h>
using namespace std;

/*
------------------------------------------
🔹 Approach 1: Iterative Factorial
- Multiply numbers from 1 to n
- Simple and efficient
------------------------------------------
*/
long long factorial(int n) {
    long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

/*
------------------------------------------
🔹 Approach 2: Recursive Factorial
- Uses recurrence relation
- Elegant but uses stack space
------------------------------------------
*/
long long factorial1(int n) {
    if (n == 0 || n == 1)
        return 1;

    return n * factorial1(n - 1);
}

/*
------------------------------------------
🔹 Approach 3: Tail Recursive Factorial
- Optimized recursion
- Carries result forward
------------------------------------------
*/
long long factorial2(int n, long long result = 1) {
    if (n == 0)
        return result;

    return factorial2(n - 1, result * n);
}

/*
------------------------------------------
🔹 Approach 4: STL-style accumulate
- Uses reduce-like logic
- Functional programming style
------------------------------------------
*/
long long factorial3(int n) {
    vector<int> v(n);

    iota(v.begin(), v.end(), 1);

    return accumulate(v.begin(), v.end(), 1LL, multiplies<long long>());
}

/*
------------------------------------------
🔹 Approach 5: Large Factorial (String)
- Handles very large numbers
- Uses manual multiplication
- Useful for competitive programming
------------------------------------------
*/
string multiply(string num, int x) {
    int carry = 0;
    string result = "";

    for (int i = num.size() - 1; i >= 0; i--) {
        int prod = (num[i] - '0') * x + carry;
        result.push_back((prod % 10) + '0');
        carry = prod / 10;
    }

    while (carry) {
        result.push_back((carry % 10) + '0');
        carry /= 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

string factorialBig(int n) {
    string result = "1";

    for (int i = 2; i <= n; i++) {
        result = multiply(result, i);
    }

    return result;
}