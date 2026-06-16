# 🧮 Combinations (nCr) – C++ Solutions

### 💡 What is a Combination?

A **combination** is a way of selecting items from a group where **order does NOT matter**.

For example:

* Choosing 2 students from {A, B, C}:

  * AB, AC, BC → these are combinations

### 📌 Formula:

{}^nC_r = \frac{n!}{r!(n-r)!}

---

## 📘 What’s Covered in This File?

This program demonstrates **multiple ways to calculate nCr in C++**:

| Approach | Description                      |
| -------- | -------------------------------- |
| 1        | Factorial-based nCr              |
| 2        | Optimized multiplicative formula |
| 3        | Pascal’s Triangle approach       |
| 4        | Recursive nCr                    |
| 5        | DP (memoization) approach        |

---

## 🧠 Why Learn Combinations?

Combinations are used in:

* 🔢 Probability problems
* 📊 Counting problems
* 🧠 Competitive programming
* 🎯 Interview questions
* 🌳 DP & combinatorics problems

---

## 🗂 File Structure

* `Combinations.cpp`

---

## 🔍 Sample Usage

```cpp id="cn1n7x"
#include <iostream>
using namespace std;

int main() {
    int n = 5, r = 2;

    cout << nCr(n, r);

    return 0;
}
```