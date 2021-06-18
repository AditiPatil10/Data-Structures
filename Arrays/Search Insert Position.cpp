// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:

// Input: nums = [1,3,5,6], target = 2
// Output: 1
// Example 3:

// Input: nums = [1,3,5,6], target = 7
// Output: 4
// Example 4:

// Input: nums = [1,3,5,6], target = 0
// Output: 0
// Example 5:

// Input: nums = [1], target = 0
// Output: 0
 

// Constraints:

// 1 <= nums.length <= 104
// -104 <= nums[i] <= 104
// nums contains distinct values sorted in ascending order.
// -104 <= target <= 104



class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size();
        int mid=(l+h)/2;
        if(h==1){
            if(nums[l]<target)
                return(l+1);
            else
                return (0);
        }
            
        if (h==2){
    
            if(nums[l]>=target){
          
                return (l);
            }
                
            else if(nums[h-1]>target){
             
                return(h-1);
            }
                
            else if (nums[h-1]<target){
                
                return (h);
            }
                
            else if(nums[h-1]==target){
               
                return(h-1);
            }
                
        }
        
        while(h-l>1){
           
            mid=(l+h)/2;
            if(nums[l]>=target)
                return (l);
            else if(nums[mid]==target)
                return(mid);
            else if (nums[h-1]<target)
                return (h);
            else if(nums[h-1]==target)
                return(h-1);
            if(target<nums[mid]){
                h=mid;
            }
            else if(target>nums[mid]){
                l=mid;
            }
        }
        if(nums[mid]<target){
           
            return(mid+1);
        }
            
        else if(nums[mid]>target){
         
            return(mid);
        }
         
        else
            {
            return(mid);
        }
         
    }

};
