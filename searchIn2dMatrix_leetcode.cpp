class Solution {
public:
    int searchRow(vector<vector<int>>& matrix, int target)  // this gives the row in which the target could be found
    {
        int start = 0; 
        int end = matrix.size()-1; 
        int mid; 
        
        while (start <= end)
        {
            mid = start + (end - start) / 2; 
            
            if (matrix[mid][0] <= target && matrix[mid][matrix[0].size()-1] >= target)
                break; 
            
            else if (matrix[mid][0] < target)
                start = mid+1;
            
            else 
                end = mid-1; 
                
        }
        return mid; 
    }
    bool searchCol(vector<vector<int>>&matrix, int row, int target) // checks whether the target is in that row or not
    {
        int start = 0; 
        int end = matrix[0].size()-1; 
        
        while (start <= end)
        {
            int mid = start + (end - start) / 2; 
            
            if (matrix[row][mid] == target)
                return true; 
            
            else if (matrix[row][mid] < target)
                start = mid+1; 
            
            else 
                end = mid-1; 
        }
        
        return false; 
    }
  
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return searchCol(matrix, searchRow(matrix, target), target); 
    }
};
