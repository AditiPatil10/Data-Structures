// Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.

// A word is a maximal substring consisting of non-space characters only.

 

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Example 2:

// Input: s = " "
// Output: 0
 

// Constraints:

// 1 <= s.length <= 104
// s consists of only English letters and spaces ' '.




class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.size();
        int count=0;
        while(s[len-1]==' '&&len>1){
            len--;
        }
        for(int i=len-1;i>=0;--i){
            if(s[i]==' ')
            {
                count=len-i-1;
                break;
            }
            count=len;
        }
        return count;
    }
   
};
