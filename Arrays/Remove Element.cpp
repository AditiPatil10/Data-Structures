// Given an array nums and a value val, remove all instances of that value in-place and return the new length.

// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

// The order of elements can be changed. It doesn't matter what you leave beyond the new length.

// Clarification:

// Confused why the returned value is an integer but your answer is an array?

// Note that the input array is passed in by reference, which means a modification to the input array will be known to the caller as well.

// Internally you can think of this:

// // nums is passed in by reference. (i.e., without making a copy)
// int len = removeElement(nums, val);

// // any modification to nums in your function would be known by the caller.
// // using the length returned by your function, it prints the first len elements.
// for (int i = 0; i < len; i++) {
//     print(nums[i]);
// }
 

// Example 1:

// Input: nums = [3,2,2,3], val = 3
// Output: 2, nums = [2,2]
// Explanation: Your function should return length = 2, with the first two elements of nums being 2.
// It doesn't matter what you leave beyond the returned length. For example if you return 2 with nums = [2,2,3,3] or nums = [2,2,0,0], your answer will be accepted.


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len=nums.size(), temp,count=0,i=0,j;
        if(0 > val ||val> 100 ||0 >= nums.size()||nums.size() > 100){
            return(0);
        }
        
        for (j=len-1; i<j;++i){
            count=0;
            if(0 > nums[i] || nums[i] >50)
                exit(0);
            while(nums[i]==val&& val==nums[j]&&i<j){
                len--; 
                j--;
              
            }
            if(nums[i]==val&&i<j){
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    len--;
                    j--;
            }
            
           
                cout<<" j["<<j<<"]="<<" "<<nums[j]<<" len="<<len;
            
            }
            if(nums[j]==val){
                len--;
            }
            cout<<i;
            return (len);
        }
        
        
};
