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
