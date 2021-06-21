// Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.
 

// Example 1:

// Input: arr = [2,6,4,1]
// Output: false
// Explanation: There are no three consecutive odds.
// Example 2:

// Input: arr = [1,2,34,3,4,5,7,23,12]
// Output: true
// Explanation: [5,7,23] are three consecutive odds.
 

// Constraints:

// 1 <= arr.length <= 1000
// 1 <= arr[i] <= 1000


class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        int i=0;
        while(i<arr.size()){
            count=0;
            
            if(arr.size()<3){
                return(false);
            }
            while(i<arr.size() && arr[i]%2!=0)
            {
                count++;
                cout<<i<<" "<<count;
                i++;  
                
            }
            if(count>=3)
            {
                return (true);
            }
            else if(i==arr.size()-1){
                
                return (false);
            }
            else
                ++i;
          
        }
        return (false);
    }
};
