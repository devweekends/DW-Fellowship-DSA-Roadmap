# 🔢 Check if a Number is Even – C++ Solutions

### 💡 What is an Even Number?

An **even number** is a number that can be **divided by 2 without any remainder**.  
In other words, if you divide it by 2 and there's nothing left over, it’s even.

🧠 Examples:
- 4 → 4 % 2 = 0 ✅ Even  
- 9 → 9 % 2 = 1 ❌ Not Even

---

## 📘 What’s Inside This File?

This program demonstrates **four different approaches** to check if a number is even in C++.

| Approach | Description |
|---------|-------------|
| 1 | Using modulo (`%`) operator |
| 2 | Using bitwise AND (`&`) to check the least significant bit |
| 3 | Using integer division logic |
| 4 | Recursive subtraction method |

---

## 🗂 File Structure
```
Even/
│
├── even_number.cpp # All approaches with comments
├── README.md # This file

└── Makefile # Build and run the program
```
---

## 🔍 Sample Usage

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 10;

    if (even(n)) {
        cout << n << " is even\n";
    } else {
        cout << n << " is odd\n";
    }

    // Try others:
    // even_bitwise(n), even_division(n), even_recursive(n)
}
```