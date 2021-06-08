// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

// Example 1:

// Input: rowIndex = 3
// Output: [1,3,3,1]
// Example 2:

// Input: rowIndex = 0
// Output: [1]
// Example 3:

// Input: rowIndex = 1
// Output: [1,1]
 

// Constraints:

// 0 <= rowIndex <= 33




class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pas;
        vector<int> row;
        int val;
        
        for(int i=0;i<=rowIndex;++i){
            for(int j=0;j<=i;++j)
            {
                if(j==0||j==i)
                {
                    row.push_back(1);
                
                }
                else if(j>0 && j<i)
                {
                    val=pas[i-1][j-1]+pas[i-1][j];
                    row.push_back(val);
                    
                }
                cout<<row[j];
            }
            
            cout<<"\n";
            pas.push_back(row); 
            row.clear();
        }
        int i=rowIndex;
        for(int j=0;j<=i;++j)
            row.push_back(pas[i][j]);
        return(row);
    }
};
