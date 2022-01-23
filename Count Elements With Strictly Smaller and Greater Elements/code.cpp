class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int s= 0; 
        int e = nums.size()-1; 
        while (s < nums.size()-1 && nums[s] == nums[s+1]) s++; 
        while (e > 0 && nums[e] == nums[e-1]) e--; 
        if(s == nums.size()-1) return 0; 
        else {
            s+=1; 
            e-=1; 
            return e - s +1; 
        }
        
    }
};
