class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int i=digits.size()-1;
        digits[i]+=1;
  
        while(digits[i]>9&&i>0){
              
                digits[i]=0;
                digits[--i]+=1;
              
        }
        if(digits[0]>9)
            {
                digits[0]=1;
                digits.push_back(0);
            }
        return(digits);
    }
};
