class Solution {
public:
    int mySqrt(int x) {
        // unsigned long float num; 
        long long  min = 1; 
        long long max = 46340; 
        long long mid; 
        if (x == 0)
        {
            mid = 0; 
        }
        else 
       { 
            while (min <= max)
            {
                mid = (min+max) / 2; 
                if ((x == (mid * mid)) || ((x > (mid*mid)) && (x < ((mid+1)*(mid+1)))))
                {
                    break; 
                }

                else if (x > (mid*mid))
                {
                    min = mid + 1; 
                }

                else 
                {
                    max = mid - 1; 
                }
            }
        }
        
        return mid;
        
    }
};
