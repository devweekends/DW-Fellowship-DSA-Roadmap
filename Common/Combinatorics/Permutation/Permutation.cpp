#include <bits/stdc++.h>
using namespace std;

/*
------------------------------------------
🔹 Approach 1: Formula-Based nPr
- Uses factorial formula
- Simple but may overflow
------------------------------------------
*/
long long factorial(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++)
        res *= i;
    return res;
}

long long nPr1(int n, int r) {
    return factorial(n) / factorial(n - r);
}

/*
------------------------------------------
🔹 Approach 2: Optimized Iterative nPr
- Avoids full factorial computation
- More efficient and safer
------------------------------------------
*/
long long nPr2(int n, int r) {
    long long res = 1;
    for (int i = 0; i < r; i++) {
        res *= (n - i);
    }
    return res;
}

/*
------------------------------------------
🔹 Approach 3: Using STL next_permutation
- Generates permutations of array/string
- Easy and commonly used
------------------------------------------
*/
void printPermutations(string s) {
    sort(s.begin(), s.end());

    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
}

/*
------------------------------------------
🔹 Approach 4: Backtracking
- Swap-based recursion
- Generates all permutations
------------------------------------------
*/
void backtrack(vector<int>& arr, int idx) {
    if (idx == arr.size()) {
        for (int x : arr)
            cout << x << " ";
        cout << endl;
        return;
    }

    for (int i = idx; i < arr.size(); i++) {
        swap(arr[i], arr[idx]);
        backtrack(arr, idx + 1);
        swap(arr[i], arr[idx]);
    }
}

/*
------------------------------------------
🔹 Approach 5: Recursive Lexicographic Style
- Builds permutations step by step
- Uses visited array
------------------------------------------
*/
void permute(vector<int>& arr,
             vector<int>& current,
             vector<bool>& used) {

    if (current.size() == arr.size()) {
        for (int x : current)
            cout << x << " ";
        cout << endl;
        return;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (!used[i]) {
            used[i] = true;
            current.push_back(arr[i]);

            permute(arr, current, used);

            current.pop_back();
            used[i] = false;
        }
    }
}