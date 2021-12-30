class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0; 
        int one = 0; 
        int two = 0; 
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                zero++; 
            else if (nums[i] == 1)
                one++; 
            else 
                two++; 
        }
        // nums.clear(); 
        fill(nums.begin(),nums.begin()+zero, 0); 
        fill(nums.begin()+zero, nums.begin()+zero+one, 1); 
        fill(nums.begin()+zero+one, nums.begin()+zero+one+two, 2); 
    }
};
