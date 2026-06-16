#include <bits/stdc++.h>
using namespace std;

/*
------------------------------------------
🔹 Approach 1: Fixed-Size Sliding Window
(Maximum Sum Subarray of Size K)

- Compute first window sum
- Slide window one position at a time
- Remove outgoing element
- Add incoming element
------------------------------------------
*/
int maxSumSubarray(vector<int>& arr, int k) {
    int n = arr.size();

    int windowSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i];
        windowSum -= arr[i - k];

        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

/*
------------------------------------------
🔹 Approach 2: Fixed-Size Window
(Average of Every Subarray of Size K)

- Maintain window sum
- Calculate average whenever
  window size becomes K
------------------------------------------
*/
vector<double> findAverages(vector<int>& arr, int k) {
    vector<double> result;

    double windowSum = 0;
    int start = 0;

    for (int end = 0; end < arr.size(); end++) {
        windowSum += arr[end];

        if (end >= k - 1) {
            result.push_back(windowSum / k);

            windowSum -= arr[start];
            start++;
        }
    }

    return result;
}

/*
------------------------------------------
🔹 Approach 3: Variable-Size Window
(Smallest Subarray With Given Sum)

- Expand window
- Shrink when sum >= target
- Track minimum length
------------------------------------------
*/
int smallestSubarray(vector<int>& arr, int target) {
    int start = 0;
    int sum = 0;

    int minLength = INT_MAX;

    for (int end = 0; end < arr.size(); end++) {
        sum += arr[end];

        while (sum >= target) {
            minLength = min(minLength, end - start + 1);

            sum -= arr[start];
            start++;
        }
    }

    return (minLength == INT_MAX) ? 0 : minLength;
}

/*
------------------------------------------
🔹 Approach 4: Longest Substring Without
Repeating Characters

- Uses HashMap
- Expands and shrinks window
- Maintains unique characters
------------------------------------------
*/
int longestUniqueSubstring(string s) {
    unordered_map<char, int> freq;

    int start = 0;
    int maxLength = 0;

    for (int end = 0; end < s.size(); end++) {
        freq[s[end]]++;

        while (freq[s[end]] > 1) {
            freq[s[start]]--;
            start++;
        }

        maxLength = max(maxLength,
                        end - start + 1);
    }

    return maxLength;
}

/*
------------------------------------------
🔹 Approach 5: Maximum Consecutive Ones

- Expand window while counting ones
- Reset when zero appears
- Track maximum streak
------------------------------------------
*/
int maxConsecutiveOnes(vector<int>& nums) {
    int current = 0;
    int maximum = 0;

    for (int num : nums) {
        if (num == 1) {
            current++;
            maximum = max(maximum, current);
        } else {
            current = 0;
        }
    }

    return maximum;
}