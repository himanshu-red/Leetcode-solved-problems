class Solution {
public:
    bool isIsomorphic(string s, string t){ 
        vector<char> v1(128, 0); 
        vector<char> v2(128, 0);
        
        for (int i = 0; i< s.size(); i++)
        {
            if (v1[s[i]] == 0 && v2[t[i]] == 0)
            {
                v1[s[i]] = t[i]; 
                v2[t[i]] = s[i]; 
            }
            else if ( v1[s[i]] != t[i] && v2[t[i]] != s[i])
            {
                return false; 
            }
        }
        return true;    
    }
};
