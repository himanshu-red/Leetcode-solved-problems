class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        numRows--; 
        vector<vector<int>> result; 
        vector<int>v; 
        result.push_back({1}); 
        for (int i = 1; i <= numRows; i++)
        {
            v.push_back(1); 
            for (int j = 1; j<i; j++)
            {
                v.push_back(result[i-1][j-1] + result[i-1][j]); 
            }
            v.push_back(1); 
            result.push_back(v); 
            v.clear(); 
        }
        return result; 
    }
};
