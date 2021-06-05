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
