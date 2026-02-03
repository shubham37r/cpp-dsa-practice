#Two Pointer Approach on Arrays

This repository contains solutions to classic array problems using the Two Pointer technique. The two pointer approach helps reduce time complexity and improves efficiency by avoiding unnecessary nested loops.

Problems Covered

Two Sum II – Input Array Is Sorted (LeetCode 167)

Remove Duplicates from Sorted Array (LeetCode 26)

1. Two Sum II – Input Array Is Sorted

LeetCode Problem No: 167
Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

Problem Statement

Given a sorted array of integers and a target value, find two numbers such that they add up to the target value.

Return the indices of the two numbers.

Example

Input
nums = [2, 7, 11, 15]
target = 9

Output
[0, 1]

Explanation
nums[0] + nums[1] = 2 + 7 = 9

Approach

Since the array is sorted, we can use two pointers.

Step 1: Place one pointer at the beginning (left).
Step 2: Place another pointer at the end (right).
Step 3: Calculate sum of elements at both pointers.

If sum equals target → return indices
If sum is less than target → move left pointer forward
If sum is greater than target → move right pointer backward

Time Complexity

O(n)

Space Complexity

O(1)

C++ Code
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];

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

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    cout << result[0] << " " << result[1];
}

2. Remove Duplicates from Sorted Array

LeetCode Problem No: 26
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

Problem Statement

Given a sorted array, remove duplicates in-place such that each unique element appears only once.

Return the number of unique elements.

Example

Input
nums = [1, 1, 2, 2, 3, 4, 4]

Output
Length = 4
Modified Array = [1, 2, 3, 4]

Approach

We use two pointers.

Pointer i keeps track of the last unique element.
Pointer j scans through the array.

Step 1: Start i at index 0
Step 2: Traverse array using j
Step 3: If nums[j] is different from nums[i], increment i and update nums[i]

Time Complexity

O(n)

Space Complexity

O(1)

C++ Code
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int i = 0;

    for (int j = 1; j < nums.size(); j++) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4};

    int k = removeDuplicates(nums);

    cout << "Unique count: " << k << endl;

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
}

Why Use Two Pointers?

Advantages
• Reduces time complexity
• Saves memory
• Clean and readable logic
• Frequently asked in interviews

Learning Outcome

After completing these problems, you will understand:

• How to efficiently traverse sorted arrays
• When two pointer technique is applicable
• How to optimize brute force solutions
