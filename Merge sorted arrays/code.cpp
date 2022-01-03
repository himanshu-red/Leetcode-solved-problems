class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res; 
        int i = 0; 
        int j = 0; 
        nums1.erase(nums1.end()-(nums2.size()) , nums1.end()) ; // removing trailing zeroes
      
        while (i < nums1.size() && j < nums2.size())
        {
            
            if (nums1[i] <= nums2[j])
            {
                res.push_back(nums1[i]); 
                i++; 
            }
             else if (nums1[i] > nums2[j])
            {
                res.push_back(nums2[j]); 
                j++; 
            }
        }
        while (i < nums1.size())
        {
            res.push_back(nums1[i]); 
            i++; 
        }
         while (j < nums2.size())
        {
            res.push_back(nums2[j]); 
            j++; 
        }
        nums1 = res; 
    }
};
