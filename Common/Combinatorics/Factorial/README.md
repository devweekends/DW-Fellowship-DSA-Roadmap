# 🧮 Factorial – C++ Solutions

### 💡 What is Factorial?

The **factorial** of a number `n` (written as `n!`) is the product of all positive integers from **1 to n**.

### Definition:

n! = n \times (n-1) \times (n-2) \times \cdots \times 1

### Example:

* 5! = 5 × 4 × 3 × 2 × 1 = **120**
* 4! = 4 × 3 × 2 × 1 = **24**
* 0! = **1** (special case)

---

## 📘 What’s Covered in This File?

This program demonstrates **multiple ways to calculate factorial in C++**:

| Approach | Description                           |
| -------- | ------------------------------------- |
| 1        | Iterative approach using loop         |
| 2        | Recursive approach                    |
| 3        | Tail recursion optimization           |
| 4        | Using STL style `accumulate` logic    |
| 5        | Handling large factorial using string |

---

## 🧠 Why Learn Factorial?

Factorial is a **core building block** for many topics:

* 🔢 Permutations & Combinations
* 📊 Probability problems
* 🧠 Recursion understanding
* 🏆 Competitive programming

---

## 🗂 File Structure

* `Factorial.cpp`

---

## 🔍 Sample Usage

```cpp id="f8h1kq"
#include <iostream>
using namespace std;

int main() {
    int n = 5;

    cout << factorial(n);

    return 0;
}
```
