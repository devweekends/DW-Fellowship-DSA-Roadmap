# 🔍 Binary Search – C++ Solutions

### 💡 What is Binary Search?

**Binary Search** is an efficient searching algorithm used to find an element in a **sorted array**.

Instead of checking elements one by one like Linear Search, Binary Search repeatedly divides the search space into half.

### Example

Consider the sorted array:

```text
[2, 5, 8, 12, 16, 23, 38]
```

Let's search for **16**.

* Middle element = 12
* Since 16 > 12, search the right half
* New middle = 23
* Since 16 < 23, search the left half
* Element found = 16 ✅

This divide-and-conquer strategy makes Binary Search extremely fast.

---

## 📘 What's Covered in This File?

This program demonstrates **five different ways** to perform Binary Search in C++:

| Approach | Description                      |
| -------- | -------------------------------- |
| 1        | Classic iterative Binary Search  |
| 2        | Cleaner iterative implementation |
| 3        | Recursive Binary Search          |
| 4        | STL `binary_search()`            |
| 5        | STL `lower_bound()`              |

---

## 🧠 Why So Many Approaches?

Each version introduces a different concept:

* 🔁 Iterative problem solving
* 🔙 Recursion
* 📚 C++ Standard Template Library (STL)
* ⚡ Efficient searching techniques
* 🏆 Competitive programming patterns

---

## 🗂 File Structure

* `BinarySearch.cpp`

---

## 🔍 Sample Usage

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38};

    int target = 16;

    int index = binarySearch(arr, target);

    if (index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}
```
