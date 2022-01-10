class Solution {
public:
    double getPow(double x, int n, double res)
    {
        if (n == 0 || x == 1 || res == 0)
            return res; 
        if (x == -1)
        {
            if (n % 2)
                return -1; 
            else 
                return 1; 
        }
        if (n > 0)
            return getPow(x, n-1, res*x); 
        return getPow(x, n+1, res*(1/x)); 
    }
    double myPow(double x, int n) {
        return getPow(x, n, 1); 
    }
};
