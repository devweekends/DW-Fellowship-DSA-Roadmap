# Two Pointers Template

Two Pointers replaces nested loops (O(n²)) with two indices that move toward or past each other usually on sorted data bringing time complexity down to O(n) or O(n log n).

There are two classic setups:

1. **Opposite ends moving inward** (convergence)
2. **Slow / fast writer-reader** (same direction)
<br>


## Setup 1: Opposite Ends Moving Inward

**Use when:** the array is sorted and you're looking for a pair/triplet with a target relationship _ a sum, a palindrome check, max area between two lines, etc.

`left` starts at index 0, `right` starts at the last index. They move toward each other based on a comparison, until they meet or cross.

**Examples:** Two Sum II (sorted), 3Sum, Valid Palindrome II, Container With Most Water

```cpp
bool twoPointersOppositeEnds(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == target) {
            return true;              // found what we're looking for
        } else if (sum < target) {
            left++;                   // need a bigger sum -> move left up
        } else {
            right--;                  // need a smaller sum -> move right down
        }
    }

    return false;
}
```

<br>

## Setup 2: Slow / Fast Writer-Reader


**Use when:** compacting, filtering, or partitioning an array in place. `fast` (reader) scans every element; `slow` (writer) only advances when it needs to keep/write a value.

Both pointers start at index 0 (or `slow` at 0, `fast` further in for merge-style problems) and move in the **same direction**  not toward each other.

**Examples:** Merge Sorted Array, Sort by Parity, Remove Duplicates from Sorted Array, Move Zeroes

```cpp
int slowFastWriterReader(vector<int>& nums) {
    int slow = 0; // next position to write a "kept" value

    for (int fast = 0; fast < nums.size(); fast++) {
        if (/* condition: keep nums[fast] */ true) {
            nums[slow] = nums[fast];
            slow++;
        }
        // if the condition fails, fast just keeps moving,
        // effectively skipping/overwriting unwanted values
    }

    return slow; // new length / boundary after partitioning
}
```
<br>

## Quick Reference

| Setup | Pointer start | Movement | Used for |
|---|---|---|---|
| Opposite ends | `left=0`, `right=n-1` | Toward each other | Sum/target pairs, palindromes |
| Slow/fast | both at `0` | Same direction | In-place partition/compaction |
