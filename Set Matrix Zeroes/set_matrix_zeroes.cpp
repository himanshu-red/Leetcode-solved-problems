class Solution {
public:
    
    void setZero(vector<vector<int>>&matrix, int row, int col)
    {
        for (int i = 0; i< matrix[0].size(); i++)
        {
            matrix[row][i] = 0; 
        }
        for (int i = 0; i< matrix.size(); i++)
        {
            matrix[i][col] = 0; 
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> coOrdinates; 
        for (int i = 0; i< matrix.size(); i++)
        {
            for (int j = 0; j<matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                    coOrdinates.push_back({i,j});   //first store all the coordinates where elemenet is a zero. 
            }
        }
        for (int i = 0; i< coOrdinates.size(); i++)
            setZero(matrix, coOrdinates[i].first, coOrdinates[i].second); 
    }
    
};
