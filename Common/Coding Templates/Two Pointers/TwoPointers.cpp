#include <bits/stdc++.h>
using namespace std;

/*
------------------------------------------
🔹 Approach 1: Two Sum in Sorted Array

- Use left and right pointers
- Compare current sum with target
- Move pointers accordingly
------------------------------------------
*/
vector<int> twoSum(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return {left, right};
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return {-1, -1};
}

/*
------------------------------------------
🔹 Approach 2: Remove Duplicates
from Sorted Array

- Slow pointer tracks unique position
- Fast pointer scans array
- Overwrites duplicates
------------------------------------------
*/
int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int left = 0;

    for (int right = 1; right < nums.size(); right++) {
        if (nums[right] != nums[left]) {
            left++;
            nums[left] = nums[right];
        }
    }

    return left + 1;
}

/*
------------------------------------------
🔹 Approach 3: Move Zeroes to End

- One pointer finds non-zero elements
- Another places them correctly
- Maintains relative order
------------------------------------------
*/
void moveZeroes(vector<int>& nums) {
    int left = 0;

    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] != 0) {
            swap(nums[left], nums[right]);
            left++;
        }
    }
}

/*
------------------------------------------
🔹 Approach 4: Valid Palindrome

- Compare characters from both ends
- Move inward each iteration
- Returns true if palindrome
------------------------------------------
*/
bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

/*
------------------------------------------
🔹 Approach 5: Container With Most Water

- Two pointers start at ends
- Calculate area each step
- Move smaller height inward
------------------------------------------
*/
int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;

    int answer = 0;

    while (left < right) {
        int width = right - left;

        int area = min(height[left],
                       height[right]) * width;

        answer = max(answer, area);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return answer;
}