class Solution {
public:
    string reverseStr(string s, int k) {
        if (k == 1)
            return s; 
        
        int currentIndex = 0;
        while (currentIndex + k-1 <= s.size()-1)
        {
            int start = currentIndex; 
            int end = currentIndex+k-1; 
            while (start <= end)
            {
                char temp = s[start]; 
                s[start] = s[end]; 
                s[end] = temp; 
                start++; 
                end--; 
            }
            currentIndex += 2*k; 
        }
        int start = currentIndex; 
        int end = s.size()-1; 
        while (start <= end)
        {
            char temp = s[start]; 
            s[start] = s[end]; 
            s[end] = temp; 
            start++; 
            end--; 
        }
        return s; 
    }
};
