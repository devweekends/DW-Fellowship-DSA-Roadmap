# 🔁 Reverse a Number – C++ Techniques

---

## 📘 Problem Statement

Given an integer `n`, return the number formed by reversing its digits.

---

## ✳️ Example

Input: 1234
Output: 4321

Input: 900
Output: 9


---

## 🚀 Approaches

### ✅ 1. Using While Loop (Mathematical)
- Extract last digit using `% 10`
- Build the reversed number using: `reversed = reversed * 10 + digit`
- Remove last digit using `/= 10`

🕒 **Time Complexity**: O(d) where d = number of digits  
🧠 **Space Complexity**: O(1)

---

### ✅ 2. Recursive Approach
- Base case: if num == 0 → return reversed
- Recursive step: reverse `num/10` while building reversed number

🕒 **Time Complexity**: O(d)  
🧠 **Space Complexity**: O(d) (recursive call stack)

---

### ✅ 3. Using String Conversion
- Convert number to string
- Reverse the string
- Convert back to integer

🕒 **Time Complexity**: O(d)  
🧠 **Space Complexity**: O(d)

---

### ✅ 4. For Loop (Math Variant)
- More compact math version using `for` loop
- Equivalent logic to the while loop approach

🕒 **Time Complexity**: O(d)

---

## 📂 Folder Structure
```
ReverseNumberTechniques/
├── reverse_number.cpp # Full code with all 4 approaches
├── README.md # Detailed explanation and usage
└── Makefile # Build and run commands
```