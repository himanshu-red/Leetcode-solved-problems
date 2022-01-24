class Solution {
public:
    void plusOne(vector<int> &v)
    {
        if (v.size() == 0)
            v.push_back(1);
        else
        {
            int carry = 0;
            for (int i = 0; i < v.size(); i++)
            {
                if (i == 0)
                {
                    v[i] += 1;
                }
                else
                {
                    v[i] += carry;
                }
                if (v[i] == 2)
                {
                    v[i] = 0;
                    carry = 1;
                }
                else if (v[i] <= 1)
                {
                    carry = 0;
                }
            }
            if (carry)
                v.push_back(1);
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result; 
        vector<int> temp; 
        vector<int> binary; 
        result.push_back(temp); 
        for (int i = 1; i< pow(2,nums.size()); i++)
        {
            plusOne(binary); 
            for (int j = 0; j<binary.size(); j++)
            {
                if (binary[j] == 1) temp.push_back(nums[j]); 
            }
            result.push_back(temp); 
            temp.clear(); 
        }
        return result; 
    }
};

