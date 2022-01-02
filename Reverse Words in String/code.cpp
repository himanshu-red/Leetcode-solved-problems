class Solution {
public:
    string reverseWords(string s) {
        string temp; 
        vector<string> v; 
        for (int i = 0; i< s.size(); i++)
        {
            if (s[i] != ' ')
            {
                temp+=s[i]; 
            }
            else if (temp.size() != 0 && s[i] == ' ')
            {
                v.push_back(temp);
                temp.clear(); 
            }
        }
        if (s[s.size()-1] != ' ')
            v.push_back(temp);
        s.clear(); 
        for (int i = v.size()-1; i >= 0; i--)
        {
            s+=v[i];
            if (i != 0)
            s+= " "; 
        } 
        return s; 
    }
};
