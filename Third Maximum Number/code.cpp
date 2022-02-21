class Solution {
public:
    int thirdMax(vector<int>& v) {
        long long prev1 = LONG_LONG_MIN, prev2 = LONG_LONG_MIN, max = LONG_LONG_MIN; 
        for (int i = 0; i< v.size(); i++)
        {
            if (max < v[i])
            {
                prev2 = prev1; 
                prev1 = max; 
                max = v[i];
            }
            else if (v[i] < max && prev1 < v[i])
            {
                prev2 = prev1; 
                prev1 = v[i]; 
            }
            else if (v[i] < prev1 && prev2 < v[i])
            {
                prev2 = v[i]; 
            }
        }
        if (prev2 != LONG_LONG_MIN) return prev2; 
        else return max; 
    }
};
