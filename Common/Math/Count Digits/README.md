# 🔢 Count Digits That Divide the Number – C++ Implementation

---

## 🧠 Problem Definition

Given an integer `n`, count how many of its digits **evenly divide** the number itself.

### ✳️ Rules:
- Ignore digits that are **0** (to avoid division by zero)
- Count digits that divide `n` **exactly** (i.e., `n % digit == 0`)

---

### ✅ Examples:

#### Example 1:
Input: 122
Digits: 1, 2, 2
122 % 1 == 0 → ✅
122 % 2 == 0 → ✅
122 % 2 == 0 → ✅

Output: 3

#### Example 2:

Input: 1012
Digits: 1, 0, 1, 2
Skip 0
1012 % 1 == 0 → ✅
1012 % 2 == 0 → ✅

Output: 3


---

## 📘 What’s Included?

| Approach | Description |
|----------|-------------|
| Brute Force | Use `%` to extract digits and check divisibility |
| `log10` Trick | Use log10 to find number of total digits (not dividing ones) |

---

## 🗂 File Structure
```
Count Digits/
├── even_digit_count.cpp # Full C++ implementation
├── README.md # Explanation and usage

└── Makefile # Build and run the code
```