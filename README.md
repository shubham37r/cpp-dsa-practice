Two Pointer Approach on Arrays 🚀

Beginner friendly implementations of array problems solved using the Two Pointer Technique.

1️⃣ Two Sum II - Sorted Array  (Two Pointers)

LeetCode 167
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

✅ Given a sorted array, find two numbers that add up to a target.

Time Complexity: O(n)
Space Complexity: O(1)

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
🧠 Key Learning

• Efficient searching target in sorted arrays
• Two pointer optimization technique


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
Another Method
```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

            if (tolower(s[left]) != tolower(s[right]))
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


5️⃣ Remove Element (Two Pointers)

LeetCode 27
https://leetcode.com/problems/remove-element/

✅ Remove all occurrences of a given value in place and return the new length of the array.

Time Complexity: O(n)
Space Complexity: O(1)

```cpp
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int j = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};
```

🧠 Key Learning

• In place array modification without extra memory
• Maintaining valid elements at the beginning of array


6️⃣ Move Zeroes (Two Pointers)

LeetCode 283
https://leetcode.com/problems/move-zeroes/

✅ Move all 0s to the end of the array while maintaining the relative order of the non-zero elements.

Time Complexity: O(n)
Space Complexity: O(1)

```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int left = 0;

        for (int right = 0; right < n; right++) {
            if (nums[right] != 0) {
                int temp = nums[right];
                nums[right] = nums[left];
                nums[left] = temp;
                left++;
            }
        }
    }
};
```

🧠 Key Learning

• In place array modification without extra memory
• Maintaining the relative order of non-zero elements
• Using two pointers to compact valid elements efficiently


⭐ More problems will be added soon.
