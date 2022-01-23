class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p = 0; 
        int n = 0; 
        vector<int> res; 
        while (res.size() != nums.size())
        {
            while (nums[p] < 0) p++; 
            res.push_back(nums[p]); 
            p++; 
            while (nums[n] > 0) n++; 
            res.push_back(nums[n]); 
            n++; 
        }
        return res; 
    }
};
