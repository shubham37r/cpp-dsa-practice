#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int removeDuplicates(vector<int>& nums){
        int n = nums.size();

        int i = 1;
        for(int j = 1; j<n; j++){
            if(nums[j] != nums[i-1]){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }

};


int main(){
    Solution s;
    vector<int> nums = {0,1,1,2,3,3,3,4};
    
    int ans = s.removeDuplicates(nums);

    cout << ans;
}