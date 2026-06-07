#include <bits/stdc++.h>
using namespace std;

/*
------------------------------------------
🔹 Approach 1: Classic Iterative Binary Search
- Uses low, high, and mid pointers
- Repeatedly halves the search space
- Returns index if found
------------------------------------------
*/
int binarySearch(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

/*
------------------------------------------
🔹 Approach 2: Cleaner Iterative Version
- Same logic as Approach 1
- Direct return statements
- More concise code
------------------------------------------
*/
int binarySearch1(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

/*
------------------------------------------
🔹 Approach 3: Recursive Binary Search
- Solves problem recursively
- Divides search range each call
- Elegant and educational
------------------------------------------
*/
int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;

    if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, high, target);

    return binarySearchRecursive(arr, low, mid - 1, target);
}

/*
------------------------------------------
🔹 Approach 4: STL binary_search()
- Uses built-in C++ algorithm
- Returns true if element exists
- Simplest implementation
------------------------------------------
*/
bool binarySearch2(vector<int>& arr, int target) {
    return binary_search(arr.begin(), arr.end(), target);
}

/*
------------------------------------------
🔹 Approach 5: Using lower_bound()
- Finds first position where target
  can be inserted
- Returns index if found
- Common in competitive programming
------------------------------------------
*/
int binarySearch3(vector<int>& arr, int target) {
    auto it = lower_bound(arr.begin(), arr.end(), target);

    if (it != arr.end() && *it == target)
        return it - arr.begin();

    return -1;
}