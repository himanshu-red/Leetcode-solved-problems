class Solution {
public:
    vector<int> dp; 
    Solution() : dp(31,-1){}
    int fib(int n) {
    if (n <= 1)
        return n; 
    if (dp[n] != -1)
        return dp[n]; 
    else 
    {
         dp[n] = fib(n-2) + fib(n-1); 
         return dp[n]; 
    }
}
};
