Two Pointer Approach on Arrays 🚀

Beginner friendly implementations of array problems solved using the Two Pointer Technique.

📚 Problems
1️⃣ Two Sum II (Sorted Array)

LeetCode 167
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

✅ Given a sorted array, find two numbers that add up to a target.

Time Complexity: O(n)
Space Complexity: O(1)

#include <vector>
using namespace std;

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target)
                return {left + 1, right + 1};
            else if (sum < target)
                left++;
            else
                right--;
        }

        return {-1, -1};
    }
};
```

2️⃣ Remove Duplicates from Sorted Array

LeetCode 26
https://leetcode.com/problems/remove-duplicates-from-sorted-array/

✅ Remove duplicates in-place and return number of unique elements.

Time Complexity: O(n)
Space Complexity: O(1)

```cpp
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int i = 1;

        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i - 1]) {
                nums[i] = nums[j];
                i++;
            }
        }

        return i;
    }
};
```

🧠 Key Learning

• Efficient traversal of sorted arrays
• In-place array modification
• Two pointer optimization technique

⭐ More problems will be added soon.
