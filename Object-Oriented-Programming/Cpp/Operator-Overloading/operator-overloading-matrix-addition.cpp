/*
https://www.hackerrank.com/challenges/operator-overloading/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Matrix {    
    public:
    vector<vector<int>> a;  
    Matrix& operator + (const Matrix& y);
};

Matrix& Matrix:: operator + (const Matrix& y) {
        
    Matrix *sum_res = new Matrix();

    for (int r = 0; r < y.a.size(); r++) {
        
        vector<int> res;
        
        for(int c = 0; c < y.a[0].size(); c++) {
            
            res.push_back((this -> a[r][c]) + y.a[r][c]);
        }
        
        sum_res -> a.push_back(res);
    }
    
    return *sum_res;
} 

/*
Sample Input

1
2 2
2 2 2 2
1 2 3 4

Sample Output

3 4 
5 6
*/

int main () {
   int cases,k;
   cin >> cases;
   for(k=0;k<cases;k++) {
      Matrix x;
      Matrix y;
      Matrix result;
      int n,m,i,j;
      cin >> n >> m;
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         x.a.push_back(b);
      }
      for(i=0;i<n;i++) {
         vector<int> b;
         int num;
         for(j=0;j<m;j++) {
            cin >> num;
            b.push_back(num);
         }
         y.a.push_back(b);
      }
      result = x+y;
      for(i=0;i<n;i++) {
         for(j=0;j<m;j++) {
            cout << result.a[i][j] << " ";
         }
         cout << endl;
      }
   }  
   return 0;
}
