/*
https://leetcode.com/problems/maximum-subarray/
https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
*/

# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    // using current and global sum values using kadane's algorithm
    // A -2  1 -3  4 -1  2  1 -5  4
    // C -2  1 -2  4  3  5  6 -1  4
    // G -2  1  1  4  4  5  6  6  6
    int maxSubArray(vector<int>& nums) {
        
        int len = nums.size();

        if(len == 1)
            return nums[0];
        
        int curr_sum = nums[0], global_sum = nums[0];       
        
        for(int i = 1; i < len; i++) {            
            curr_sum = max(curr_sum + nums[i], nums[i]);
            global_sum = max(global_sum, curr_sum);
        }
        
        return global_sum;
    }

    vector<int> inputArr() {

        int n, num;
        cin >> n;
        vector<int> arr;
        while (n-- > 0) {
            cin >> num;
            arr.push_back(num);
        }
        return arr;
        
    }
};

int main() {

    /*
    9
    -2  1 -3  4 -1  2  1 -5  4
    */

    /*
    6
    */

    Solution *soln = new Solution;
    vector<int> arr = soln -> inputArr();
    cout << soln -> maxSubArray(arr) << endl;
    
    return 0;
}


// C++ without STL for t number of inputs

/*
#include <iostream>
using namespace std;

class Solution {
public:    
    int maxSubArraySum(int *arr, int n) {
        
        if(n == 1)
            return arr[0];
        
        int curr_sum[n];
        int global_sum[n];
        
        curr_sum[0] = arr[0];
        global_sum[0] = arr[0];
        
        for(int i = 1; i < n; i++) {
            
            curr_sum[i] = max(curr_sum[i - 1] + arr[i], arr[i]);
            global_sum[i] = max(global_sum[i -1], curr_sum[i]);
        }
        
        return global_sum[n - 1];
    }
    
    void solve() {
        int n, num;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> num;
            arr[i] = num;
        }
        cout << maxSubArraySum(arr, n) << endl;
    }
    
};


int main() {
	//code
	int t;
	cin >> t;
	while (t-- > 0) {
    	Solution soln;
    	soln.solve();
	}
	
	return 0;
}
*/