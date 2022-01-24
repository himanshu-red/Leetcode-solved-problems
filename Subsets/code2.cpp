class Solution {
public:
    void getSubsets(int i, int size,vector<int> nums, vector<int> temp, vector<vector<int>>&res)
    {
        if (i >= size)
        {
            res.push_back(temp);
            return; 
        }
        temp.push_back(nums[i]); 
        getSubsets(i+1, size, nums, temp, res); 
        temp.pop_back(); 
        getSubsets(i+1, size, nums, temp, res); 
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res; 
        vector<int> temp; 
        getSubsets(0, nums.size(), nums, temp, res); 
        return res; 
    }
};
