class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0; 
        for(auto &i : nums)
        {
            int num = (floor(log10(i))+1); 
            if (num % 2 == 0) count++; 
        }
        return count; 
    }
};
