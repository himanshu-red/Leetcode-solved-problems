class Solution {
public:
    int getPeak(vector<int>&nums,int s,int e)
    {
        int mid = s + (e - s) /2; 
        if (nums[0] > nums[1]) return 0; 
        if (nums[nums.size()-1] > nums[nums.size()-2]) return nums.size()-1; 
        if (nums[mid] > nums[mid-1] && nums[mid]> nums[mid+1]) return mid; 
        if (nums[mid] < nums[mid+1]) return getPeak(nums, mid+1, e); 
        return getPeak(nums, s, mid); 
    }
    int findPeakElement(vector<int>& nums) {
        if (nums.size() == 1) return 0; 
        return getPeak(nums, 0, nums.size()-1) ; 
    }
};
