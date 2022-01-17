typedef unsigned long long ull; 
class Solution {
public:
    
    int climbStairs(int n) {
        vector<ull> v(47);
        v[0] = 0; 
        v[1] = 1; 
        for (int i = 2; i<=n+1; i++)
        {
            v[i] = v[i-1] + v[i-2];
        }
        return v[n+1]; 
    }
};
