#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {

        string cleaned = "";

        for(char c : s){
            if(isalnum(c)){
                cleaned += tolower(c);
            }
        }

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

int main(){
    Solution sol;
    
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    string test3 = " ";
    
    cout << "Test 1: \"" << test1 << "\"" << endl;
    cout << "Is Palindrome: " << (sol.isPalindrome(test1) ? "true" : "false") << endl << endl;
    
    cout << "Test 2: \"" << test2 << "\"" << endl;
    cout << "Is Palindrome: " << (sol.isPalindrome(test2) ? "true" : "false") << endl << endl;
    
    cout << "Test 3: \"" << test3 << "\"" << endl;
    cout << "Is Palindrome: " << (sol.isPalindrome(test3) ? "true" : "false") << endl;
    
    return 0;
}
