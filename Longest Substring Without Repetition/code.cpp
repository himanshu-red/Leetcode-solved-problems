class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0)
            return 0; 
        map<char, int>m; 
        int count = 0; 
        int maxCount = 0; 
        int lastCount = 0; 
        int prev = 0; 
        for (int i = 0; i < s.size(); i++)
        {
            if (m.find(s[i]) == m.end())
            {
                m[s[i]] = i; 
            }
            else 
            { 
                if (prev <= m[s[i]])
                {
                    count = i - prev; 
                    prev= m[s[i]]+1; 
                    if (count > maxCount)
                         maxCount = count; 
                }
                m[s[i]] = i; 
            }
        }    
        if (maxCount == 0)
            maxCount = s.size(); 
        return (maxCount > s.size()-prev) ? (maxCount) : (s.size()-prev); 
    }
};
