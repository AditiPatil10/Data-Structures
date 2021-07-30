// Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.

 

// Example 1:


// Input: n = 3
// Output: 5
// Example 2:

// Input: n = 1
// Output: 1
 

// Constraints:

// 1 <= n <= 19

class Solution {
public:
    long long int ncr(long long int n, long long int r) 
    { 
        long long int res=1; 
        
        for(int i=0;i<r;i++) 
        { 
            res*=(n-i); 
            res/=(i+1); 
        } 
        return res; 
    } 
    
    int numTrees(int n) {
        long long int res=ncr(2*n,n);
        return res/(n+1);
        
    }
    
};
