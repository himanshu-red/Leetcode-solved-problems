class Solution {
public:
    int getKthChar(int k, int i,  string &s)
    {
        if (k == s.size())
            return s[k-1]-48;
        else if (k < s.size())
            return s[k-2]-48; 
        if (s[i] == 0)
            s += "01"; 
        else 
            s+= "10"; 
        return getKthChar(k, i+1, s); 
    }
    int kthGrammar(int n, int k) {
        string s1("0"); 
        return getKthChar(k, 1, s1) ; 
    }
};
