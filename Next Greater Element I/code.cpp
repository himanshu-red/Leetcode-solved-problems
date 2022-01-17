class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int> s; 
        vector<int> data; 
        vector<int> result; 
        for (int i = nums2.size()-1; i>= 0; i--)
        {
            if (s.size() == 0)
            {
                data.push_back(-1); 
                s.push(nums2[i]); 
            }
            else 
            {
                while (!(s.empty()) && s.top() < nums2[i]) s.pop(); 
                if (!(s.empty())) data.push_back(s.top()); 
                else    data.push_back(-1); 
                s.push(nums2[i]); 
            }
        }
        reverse(data.begin(), data.end());
        for (int i = 0; i< nums1.size(); i++)
        {
            int s = 0; 
            int e = nums2.size()-1; 
            while (s <= e)
            {
                if      (nums2[s] == nums1[i]) result.push_back(data[s]); 
                else if (nums2[e] == nums1[i]) result.push_back(data[e]); 
                s++; e--; 
            }
        }
        return result; 
    }
};
