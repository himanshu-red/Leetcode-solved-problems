class Solution {
public:
    bool checkRow(int row, vector<vector<int>> &matrix)
    {
        vector<int> hash(matrix.size()+1, 0); 
        for (int i =0; i< matrix.size(); i++)
            hash[matrix[row][i]] = 1; 
        sort(hash.begin(), hash.end()); 
        return (hash[1] == 0) ? (false) : (true); 
    }
    bool checkCol(int col, vector<vector<int>>&matrix)
    {
        vector<int> hash(matrix.size()+1, 0); 
        for (int i =0; i< matrix.size(); i++)
            hash[matrix[i][col]] = 1; 
        sort(hash.begin(), hash.end()); 
        return (hash[1] == 0) ? (false) : (true); 
    }
    bool checkValid(vector<vector<int>>& matrix) {
        for (int i = 0; i< matrix.size(); i++)
        {
            if (!(checkRow(i, matrix)))
                return false; 
            if (!(checkCol(i, matrix)))
                return false; 
        }
        return true; 
    }
};
