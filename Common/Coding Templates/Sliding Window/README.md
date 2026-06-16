# Sliding Window – C++ Solutions

### 💡 What is the Sliding Window Technique?

The **Sliding Window** technique is a common algorithmic approach used to solve problems involving **subarrays**, **substrings**, or **contiguous sequences** efficiently.

Instead of repeatedly processing the same elements, the window "slides" across the array or string while updating the result incrementally.

This often reduces the time complexity from **O(n²)** to **O(n)**.

### Example

Suppose we want to find the maximum sum of a subarray of size **3**:

```text
[2, 1, 5, 1, 3, 2]
```

Window size = 3

```text
[2,1,5] → Sum = 8
[1,5,1] → Sum = 7
[5,1,3] → Sum = 9
[1,3,2] → Sum = 6
```

Maximum sum = **9** ✅

Instead of calculating every window from scratch, we:

* Remove the outgoing element
* Add the incoming element
* Update the sum efficiently

---

## 📘 What's Covered in This File?

This program demonstrates **five common Sliding Window approaches** in C++:

| Approach | Description                                             |
| -------- | ------------------------------------------------------- |
| 1        | Fixed-size window (Maximum Sum Subarray)                |
| 2        | Fixed-size window (Average of Subarrays)                |
| 3        | Variable-size window (Smallest Subarray with Given Sum) |
| 4        | Longest Substring Without Repeating Characters          |
| 5        | Maximum Consecutive Ones                                |

---

## 🧠 Why Learn Sliding Window?

The Sliding Window technique is widely used for:

* 📊 Array problems
* 🔤 String problems
* ⚡ Optimization
* 🏆 Competitive programming
* 💼 Technical interviews

Many problems that seem O(n²) can be solved in O(n) using Sliding Window.

---

## 🗂 File Structure

* `SlidingWindow.cpp`

---

## 🔍 Sample Usage

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};

    cout << maxSumSubarray(arr, 3);

    return 0;
}
```
