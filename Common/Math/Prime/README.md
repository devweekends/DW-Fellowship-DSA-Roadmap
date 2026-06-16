# 🔢 Prime Number Checker – C++ Implementations

---

## 🧠 What is a Prime Number?

A **prime number** is a natural number greater than 1 that:
- Has exactly **two distinct** positive divisors: **1 and itself**
- Cannot be formed by multiplying two smaller natural numbers

### ✅ Examples:
- 2 → Prime (only 1 and 2)
- 3 → Prime (only 1 and 3)
- 4 → ❌ Not Prime (1, 2, 4)
- 5 → Prime
- 6 → ❌ Not Prime (1, 2, 3, 6)

---

## 📘 What’s Covered?

This file demonstrates **three distinct approaches** to determine if a number is prime:

| Approach       | Description                                       |
|----------------|---------------------------------------------------|
| Brute Force    | Try all numbers from 2 to n-1                     |
| Optimized      | Try only up to √n (square root)                   |
| Recursive      | Use recursion to divide from 2 up to √n          |

---

## 🗂 File Structure
```
Prime/
│
├── prime_number.cpp # All three approaches with comments
├── README.md # This file
└── Makefile # Build and run commands
```
---

## 🔍 Sample Usage

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 29;

    cout << "Brute Force: " << isPrimeBruteForce(n) << endl;
    cout << "Optimized: " << isPrimeOptimized(n) << endl;
    cout << "Recursive: " << isPrimeRecursive(n) << endl;

    return 0;
}

```