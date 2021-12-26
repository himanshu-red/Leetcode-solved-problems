class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowMin = 0; 
        int colMin = 0; 
        int rowMax =  matrix.size()-1; 
        int colMax = matrix[0].size()-1;
        int prevSize = 0;
        vector<int> v ;
        
        while (1)
        {
            if((rowMin > rowMax) || (colMin > colMax))
                break; 
            for (int i = colMin; i<= colMax; i++)
            {
                v.push_back(matrix[rowMin][i]); 
            }
            rowMin++;
             if((rowMin > rowMax) && (colMin > colMax))  
                 break; 

            for (int i = rowMin; i<= rowMax; i++)
            {
                v.push_back(matrix[i][colMax]); 
            }
            colMax--;
            if((rowMin > rowMax) || (colMin > colMax))
                break; 

            for (int i = colMax; i>= colMin; i-- )
            {
                v.push_back(matrix[rowMax][i]); 
            }
            rowMax--;
            if((rowMin > rowMax) || (colMin > colMax))
                break; 

            for (int i = rowMax; i>= rowMin; i--)
            {
                v.push_back(matrix[i][colMin]); 
            }
            colMin++; 
            if((rowMin > rowMax) || (colMin > colMax))
                break; 
        }
        return v; 
    }
};
