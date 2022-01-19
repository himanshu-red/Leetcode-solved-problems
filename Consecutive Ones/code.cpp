class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int currCount = 0; 
        int maxCount = 0; 
        for (auto &i : nums)
        {
            if (i == 1) currCount++; 
            else 
            {
                if (maxCount < currCount) maxCount = currCount; 
                currCount = 0; 
            }
        }
        return max(currCount, maxCount); 
    }
};
