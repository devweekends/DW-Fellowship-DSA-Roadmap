# 🔢 Check if a Number is Odd – C++ Solutions

### 💡 What is an Odd Number?

An **odd number** is any number that **cannot be divided evenly by 2**.  
This means there will always be a **remainder of 1** when you divide it by 2.

🧠 Examples:
- 3 → 3 % 2 = 1 ✅ Odd  
- 6 → 6 % 2 = 0 ❌ Not Odd

---

## 📘 What’s Inside This File?

This program explores **four different ways** to check if a number is odd in C++.

| Approach | Description |
|---------|-------------|
| 1 | Using modulo `%` operator |
| 2 | Using bitwise AND `&` to inspect binary form |
| 3 | Using integer division and reverse calculation |
| 4 | Recursive subtraction down to 0 or 1 |

---

## 🗂 File Structure
```
Odd/
│
├── odd_number.cpp # All approaches with full comments
├── README.md # This file
└── Makefile # Build and run commands
```
---

## 🔍 Sample Usage

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 7;

    if (odd(n)) {
        cout << n << " is odd\n";
    } else {
        cout << n << " is even\n";
    }
    // Try others:
    // odd_bitwise(n), odd_division(n), odd_recursive(n)
}
```