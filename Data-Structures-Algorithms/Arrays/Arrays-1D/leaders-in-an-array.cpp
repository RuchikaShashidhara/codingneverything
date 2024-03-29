/*
https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1#
*/

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        
        vector<int> leaders;
        
        leaders.insert(leaders.begin(), arr[n - 1]);
        int max_i = n - 1;
        
        for (int i = n - 2; i >= 0; i--) {
            
            if (arr[i] >= arr[max_i]) {
                leaders.insert(leaders.begin(), arr[i]);
                max_i = i;
            }
        }
        
        return leaders;
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends