#include <bits/stdc++.h>
using namespace std;

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

int main() {
    Solution obj;

    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int newLength = obj.removeElement(nums, val);

    cout << "New Length: " << newLength << endl;
    cout << "Modified Array: ";

    for(int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
