Two Pointer Approach on Arrays 🚀

Beginner friendly implementations of array problems solved using the Two Pointer Technique.

📚 Problems
1️⃣ Two Sum II - Sorted Array  (Two Pointers)

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



2️⃣ Remove Duplicates from Sorted Array (Two Pointers)

LeetCode 26
https://leetcode.com/problems/remove-duplicates-from-sorted-array/

✅ Remove duplicates in-place and return number of unique elements.

Time Complexity: O(n)
Space Complexity: O(1)

```cpp
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



3️⃣ Valid Palindrome (Two Pointers)

LeetCode 125
https://leetcode.com/problems/valid-palindrome/

✅ Check if a string is a palindrome considering only alphanumeric characters and ignoring cases.

Time Complexity: O(n)
Space Complexity: O(n)

```cpp
class Solution {
public:
    bool isPalindrome(string s) {

        string cleaned = "";

        // Remove non-alphanumeric characters and convert to lowercase
        for(char c : s){
            if(isalnum(c)){
                cleaned += tolower(c);
            }
        }

        // Two pointer approach
        int left = 0;
        int right = cleaned.size() - 1;

        while(left < right){
            if(cleaned[left] != cleaned[right])
                return false;

            left++;
            right--;
        }

        return true;
    }
};
```

🧠 Key Learning

• String preprocessing and filtering
• Two pointer technique on strings
• Palindrome validation logic



4️⃣ Container With Most Water (Two Pointers)

LeetCode 11 https://leetcode.com/problems/container-with-most-water/

✅ Find two lines that together with the x-axis form a container that stores the maximum amount of water.

Time Complexity: O(n)
Space Complexity: O(1)

```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int maxArea = 0;

        while(left < right){

            int currArea = min(height[left], height[right]) * (right - left);

            maxArea = max(maxArea, currArea);

            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }

        return maxArea;
    }
};
```


🧠 Key Learning

• Understanding two pointer optimization
• Reducing time complexity from O(n²) to O(n)


⭐ More problems will be added soon.
