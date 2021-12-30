class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result; 
        vector<int>v; 
        result.push_back({1}); 
        for (int i = 1; i <= rowIndex; i++)
        {
            v.push_back(1); 
            for (int j = 1; j<i; j++)
            {
                v.push_back(result[j-1] + result[j]); 
            }
            v.push_back(1); 
            result = v; 
            v.clear(); 
        }
        return result; 
    }
};
