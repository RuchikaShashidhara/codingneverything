/*
https://leetcode.com/problems/excel-sheet-column-title/
*/

# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        
        string title;
        
        while (n) {
            
            // Decrementing before, because of 1-based indexing
            n--;   
            
            // appending all quotients + remainder
            title = (char)(n % 26 + 'A') + title; 
            
            // Divinding by 26, len of alphabet set
            n /= 26;    
        }
        return title;        
    }
};

int main() {

    /*
    100
    */
    
    /*
    CV
    */
   
    Solution *soln = new Solution;
    int n;
    cin >> n;
    cout << soln -> convertToTitle(n) << endl;

    return 0;
}