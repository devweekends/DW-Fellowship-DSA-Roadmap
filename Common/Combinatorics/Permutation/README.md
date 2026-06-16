# 🔀 Permutations – C++ Solutions

### 💡 What is a Permutation?

A **permutation** is an arrangement of items where **order matters**.

For example:

* From {A, B, C}:

  * ABC, ACB, BAC, BCA, CAB, CBA → these are permutations

---

## 📌 Formula:

{}^nP_r = \frac{n!}{(n-r)!}

---

## 📘 What’s Covered in This File?

This program demonstrates **multiple ways to compute and generate permutations in C++**:

| Approach | Description                |
| -------- | -------------------------- |
| 1        | Formula-based nPr          |
| 2        | STL `next_permutation()`   |
| 3        | Backtracking generation    |
| 4        | Recursive swapping method  |
| 5        | Lexicographic permutations |

---

## 🧠 Why Learn Permutations?

Permutations are used in:

* 🔢 Arrangement problems
* 🧠 Backtracking problems
* 🏆 Competitive programming
* 🎯 Interview questions
* 🔐 Cryptography basics

---

## 🗂 File Structure

* `Permutations.cpp`

---

## 🔍 Sample Usage

```cpp id="p1q7kd"
#include <iostream>
using namespace std;

int main() {
    int n = 5, r = 2;

    cout << nPr(n, r);

    return 0;
}
```
