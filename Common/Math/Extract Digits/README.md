# 🔢 Extract Digits & Count Total – C++ Implementation

---

## 📘 Problem Statement

You are given a number `n`. The goal is to **extract its digits** and **count how many digits** the number has.

This is a basic math operation used in problems such as:
- Reverse a number
- Palindrome checks
- Sum of digits
- Armstrong number logic

---

## ✳️ Example:

### Input:
1234
### Steps:
1234 % 10 = 4 → count = 1
123 % 10 = 3 → count = 2
12 % 10 = 2 → count = 3
1 % 10 = 1 → count = 4
0 → loop stops

### Output:
4

---

## 🚀 Approach

### 🔸 Using `%` and `/`

| Operation | Meaning                 |
|----------:|-------------------------|
| `n % 10`  | Extract the last digit  |
| `n / 10`  | Remove the last digit   |

Repeat these steps until the number becomes `0`. For every iteration, increase the digit count.

---

## 🧠 Why This Works?

Every number in base-10 can be broken down into its digits using:
- `% 10` → gets the last digit
- `/ 10` → removes the last digit

This is the foundation for many number-based algorithms.

---

## 📂 File Structure
```
ExtractDigit/
├── extract_digit.cpp # Full working code
├── README.md # Explanation and approach
└── Makefile # Build and run the code
```