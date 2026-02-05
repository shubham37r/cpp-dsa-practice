#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int left = 0;
        int right = n - 1;

        int maxArea = 0;

        while (left < right) {
            int currArea = min(height[left], height[right]) * (right - left);

            maxArea = max(maxArea, currArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxArea;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> height(n);

    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    Solution obj;
    int result = obj.maxArea(height);

    cout << "Maximum Area: " << result << endl;

    return 0;
}
