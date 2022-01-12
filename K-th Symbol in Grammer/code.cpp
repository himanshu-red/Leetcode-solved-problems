class Solution {
public:
    void fillStr(string &s1, string &s2)
    {
        for (int i = 0; i< s1.size(); i++)
        {
            if (s1[i] == '0')
                s2 += "01"; 
            else 
                s2 += "10"; 
        }
    }
    char getChar(string s1, string s2, int k)
    {
        if (s1.size() != 0)
            return s1[k-1]; 
        return s2[k-1]; 
    }
    int getKthChar(int n, int k, int i,  string &s1, string &s2)
    {
        if (k == 1)
            return 0; 
        if (n == 1)
            return getChar(s1, s2, k)-48; 
        if(s1.size() != 0)
        {
            fillStr(s1, s2);
            s1.clear(); 
            return getKthChar(n-1, k, i+1, s1, s2); 
        }
        else 
        {
            fillStr(s2, s1); 
            s2.clear(); 
            return getKthChar(n-1, k, i+1, s1, s2); 
        }
        
    }
    int kthGrammar(int n, int k) {
        string s1("0"); 
        string s2; 
        return getKthChar(n, k, 0, s1, s2) ; 
    }
};
