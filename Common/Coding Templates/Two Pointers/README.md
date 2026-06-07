# Two Pointers – C++ Solutions

### 💡 What is the Two Pointers Technique?

The **Two Pointers** technique is a powerful algorithmic pattern where two pointers traverse a data structure (usually an array or string) to solve problems efficiently.

Instead of using nested loops, we move one or both pointers based on certain conditions, often reducing the time complexity from **O(n²)** to **O(n)**.

### Example

Suppose we have a sorted array:

```text
[1, 2, 3, 4, 6]
```

And we want to find two numbers whose sum is **6**.

* Left pointer → 1
* Right pointer → 6

```text
1 + 6 = 7 > 6
```

Move right pointer left.

```text
1 + 4 = 5 < 6
```

Move left pointer right.

```text
2 + 4 = 6
```

✅ Pair found!

---

## 📘 What's Covered in This File?

This program demonstrates **five common Two Pointer approaches** in C++:

| Approach | Description                         |
| -------- | ----------------------------------- |
| 1        | Two Sum in Sorted Array             |
| 2        | Remove Duplicates from Sorted Array |
| 3        | Move Zeroes to End                  |
| 4        | Valid Palindrome Check              |
| 5        | Container With Most Water           |

---

## 🧠 Why Learn Two Pointers?

The Two Pointers technique is useful for:

* 📊 Array manipulation
* 🔤 String processing
* ⚡ Optimization
* 🏆 Competitive programming
* 💼 Technical interviews

Many brute-force O(n²) solutions become O(n) using Two Pointers.

---

## 🗂 File Structure

* `TwoPointers.cpp`

---

## 🔍 Sample Usage

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 6};

    vector<int> result = twoSum(arr, 6);

    cout << result[0] << " " << result[1];

    return 0;
}
```
