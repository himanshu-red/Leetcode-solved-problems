class Solution {
public:
    string getReverse(string str)
    {
        reverse(str.begin(), str.end()); 
        return str; 
    }
    string getInverted(string str)
    {
        for (int i = 0; i< str.size(); i++)
        {
            if (str[i] == '1')
                str[i] = '0'; 
            else 
                str[i] = '1'; 
        }
        return str; 
    }
    int getKthChar(int k, int i,  string &s)
    {
        if (k <= s.size())
            return s[k-1]-48; 
        if (i % 2)
            s += getReverse(s); 
        else 
            s += getInverted(s); 
        cout << s << endl ;
        return getKthChar(k,i+1, s); 
    }
    int kthGrammar(int n, int k) {
        string s1("0"); 
        return getKthChar(k,2, s1) ; 
    }
};
