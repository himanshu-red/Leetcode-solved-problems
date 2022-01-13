class Solution {
public:
    int getSqrt(int start, int end, int val)
    {
        if (val == 0) return 0; 
        double mid = start + (end - start ) / 2; 
        if (floor(mid * mid) <= val && floor((mid+1) * (mid+1)) > val) return mid; 
        if (floor(mid * mid) > val) return getSqrt(start, mid-1, val); 
        return getSqrt(mid+1, end, val); 
    }
    int mySqrt(int x) {
        return getSqrt(1,x, x); 
     }
};
