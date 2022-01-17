class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> data; 
        stack <int> stack;
        for (int i = nums.size()-1; i >= 0; i--)
        {
            if (data.size() == 0)
            {
                int j = 0; 
                while (nums[j] <= nums[nums.size()-1] && j != nums.size()-1 ) j++; 
                if (j != nums.size()-1)
                {
                    data.push_back(nums[j]);
                }
                else 
                {
                    data.push_back(-1); 
                }
                stack.push(nums[i]); 
            }
            
            else 
            {
                while (!(stack.empty()) && stack.top() <= nums[i]) stack.pop(); 
                if (stack.empty()) 
                {
                    int j = 0; 
                    while (nums[j] <= nums[i] && j != i ) j++; 
                    if (j != i)
                    {
                        data.push_back(nums[j]);
                    }
                    else 
                    {
                        data.push_back(-1); 
                    }
                }
                else               data.push_back(stack.top()); 
                stack.push(nums[i]); 
            }
        }
        reverse(data.begin(), data.end()); 
        return data; 
    }
};
