// ndex of first 1 in a sorted array of 0s and 1s 
// Basic Accuracy: 54.13% Submissions: 11796 Points: 1
// Given a sorted array consisting 0’s and 1’s. The task is to find the index of first ‘1’ in the given array.

 

// Example 1:

// Input : 
// arr[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1}
// Output : 
// 6
// Explanation:
// The index of first 1 in the array is 6.


// Example 2:
// Input : 
// arr[] = {0, 0, 0, 0}
// Output : 
// -1
// Explanation:
// 1's are not present in the array.
 
 
// Your Task:  
// You don't need to read input or print anything. Your task is to complete the function firstIndex() which takes the array A[] and its size N as inputs and returns the index of first 1. If 1 is not present in the array then return -1.


// Expected Time Complexity: O(Log (N))
// Expected Auxiliary Space: O(1)

 

// Constraints:
// 1 ≤ N ≤ 106
// 0 ≤ Ai ≤ 1

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        int index=0;
       for(int i=0;i<n;i++)
       {
           if(a[i]!=index)
           {
               return i;
           }
           
          
       }
       
       return -1;
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}  // } Driver Code Ends