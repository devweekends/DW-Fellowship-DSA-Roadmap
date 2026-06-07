# 🔢 Print All Divisors – C++ Implementation

---
## 📘 Definition

A divisor of a number `n` is any number that divides `n` exactly (i.e., with remainder 0).
Example: For n = 36, divisors are:
1, 2, 3, 4, 6, 9, 12, 18, 36

## 📘 Problem Statement

Given a number `n`, your task is to print all of its **positive divisors**.

A **divisor** is a number that divides `n` exactly (with remainder 0).

---

## ✳️ Example:

For `n = 36`, the divisors are:
1, 2, 3, 4, 6, 9, 12, 18, 36



---

## 🚀 Approaches

### ✅ Approach 1: Brute Force
- Loop from `1` to `n`.
- If `n % i == 0`, then `i` is a divisor.

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### ✅ Approach 2: Optimized (Square Root Method)
- Divisors appear in pairs `(i, n/i)`
- Loop only from `1` to `sqrt(n)` and print both `i` and `n/i`.

**Time Complexity:** O(√n)  
**Space Complexity:** O(1)

---

### ✅ Approach 3: Vector + Sorted Output
- Store each divisor and its pair in a vector
- Sort the vector before printing (if order matters)

**Time Complexity:** O(√n + k log k)  
**Space Complexity:** O(k), where `k` = number of divisors

---

### ✅ Approach 4: Recursive Method
- Use recursion from `1` to `n` and print only if divisible.

**Time Complexity:** O(n)  
**Space Complexity:** O(n) (due to call stack)

---

## 📂 File Structure
```
DivisorTechniques/
├── print_all_divisors.cpp # All four approaches in one file
├── README.md # Full explanation and breakdown
└── Makefile # Build and run commands
```