class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int totalOnes = 0; 
        int totalZeroes = 0; 
        int leftZeroes= 0; 
        int rightOnes = 0; 
        int maxScore = 0; 
        vector<int> indices; 
        for (auto &i : nums)
        {
            if (i == 1) totalOnes++; 
            else        totalZeroes++; 
        }
        for (int i = 0; i< nums.size(); i++)
        {
            if (i == 0)
            {
                leftZeroes = 0; 
                rightOnes= totalOnes; 
            }
            else if (i>0)
            {
                if (nums[i-1] == 0)
                    leftZeroes++;
                else if (nums[i-1] == 1)
                    rightOnes--;
            }
            if (maxScore < leftZeroes+rightOnes)
            {
                maxScore = leftZeroes + rightOnes; 
                indices.clear(); 
                indices.push_back(i); 
            }
            else if (maxScore == leftZeroes + rightOnes)
            {
                indices.push_back(i); 
            }

        }
        if (maxScore < totalZeroes)
        {
            indices.clear(); 
            indices.push_back(nums.size()); 
        }
        else if (maxScore == totalZeroes)
        {
            indices.push_back(nums.size()); 
        }
        return indices; 
    }
};
