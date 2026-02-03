#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int> twoSum (vector<int>& nums, int target){
        // n for size of array
        int n = nums.size();
       
        // Make two different pointers one at start and at end
        int left = 0;  // at the start
        int right = n-1;  // at the end of array

        while(left<right){  // while loop till the end pointer pass the start
            int sum = nums[left] + nums[right];  // sum to store the current sum of start and end elements

            if(sum == target){
                return {left+1, right+1};  // when we found the sum we return the index as 1-indexed array 
            }else if(sum < target){
                left++;  // when the sum is less than the target we increase the left pointer as array is sorted
            }else{
                right--;  // in else i.e, when sum is more we reduce the right to make sum smaller
            }
        }
        return {-1, -1};  // if we didnt found the target and sum we return -1, -1 as null
    }
};

int main() {
    Solution s;  // object of the Solution class

    vector<int> nums = {2,7,11,15};  // nums vector to be called by function
    int target = 9;  // target also for parameter

    vector<int> ans = s.twoSum(nums, target);   // ans vector storing the result of func twoSum
    if(ans[0] != -1){
        cout << ans[0] <<" " << ans[1];  // checks if ans vector's elements is not equal to -1 so its right
    } else{
        cout << "No pair found";  // if it has the -1 then return no pair found
    }

    return 0;
}