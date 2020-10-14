/*
https://leetcode.com/problems/palindrome-number/
*/

# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        
        string num_str = to_string(x);
        int num_str_len = num_str.length();
        
        for(int i = 0; i < num_str_len/2; i++) {
            
            if (num_str[i] != num_str[num_str_len - 1 - i])
                return false;
        }
        
        return true;
    }
};

int main () {
    Solution mysoln;
    int n;
    cin >> n;
    bool palin = mysoln.isPalindrome(n);
    cout << palin << endl;
}