/*
https://practice.geeksforgeeks.org/problems/structs-and-objects/1
*/

//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    Rectangle(){}
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    
};
int area(Rectangle r);
void maxArea(Rectangle arr[],int n);

/*
Input:
N = 4
9 8 
7 6 
5 4 
3 2

Output: 
72

Explanation:
We have N = 4, so 4 rectangle objects.
Obj1 (9,8), Obj2(7,6), Obj3(5,4), Obj4(3,2).
Area is length*breadth. So 9*8 = 72 gives maxArea.
*/

 // } Driver Code Ends
//User function Template for C++


int area(Rectangle r)
{
   //return length*breadth
   return r.length * r.breadth;
}


void maxArea(Rectangle arr[],int n)
{
   
   //Your code here. Use area function to calculate area of a reactangle object
    int max_area = -1;
    
    for (int i = 0; i < n; i++) {
        
        max_area = max(area(arr[i]), max_area);
    }
    
    cout << max_area;
    
    cout<<endl;
}


// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;//Number of rectangle objects
	    Rectangle arr[n]; //array of rectangle objects
	    for(int i=0;i<n;i++)
	    {
	        int l,b;
	        cin>>l>>b; //length and breadth of a object
	        Rectangle r(l,b); //creating a object r
	        arr[i]=r; //fill the array
	    }
	    maxArea(arr,n); //function to calculate maxArea
	}
	return 0;
}

  // } Driver Code Ends