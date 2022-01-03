// No extra space used
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0; 
        int j = 0; 
        while (i < m && j < n)
        {
            if (nums2[0] < nums1[i])
            {
                int temp = nums1[i]; 
                nums1[i]  = nums2[0]; 
                nums2[0] = temp; 
                sort(nums2.begin(), nums2.end()); 
            }
            if (nums1[i] <= nums2[0])
            {
                i++; 
            }
        }
        j = 0; 
        for (int i = m; i<m+n; i++)
        {
            nums1[i] = nums2[j]; 
            j++; 
        }
    }
};
