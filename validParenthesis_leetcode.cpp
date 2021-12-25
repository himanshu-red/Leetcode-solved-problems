
class Solution
{
public:
    bool isValid(string s)
    {

        vector<char> v;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                v.push_back(s[i]);
            }
            else if (v.size() != 0 && s[i] == ')' && v[v.size() - 1] == '(')
            {
                v.pop_back();
            }
            else if (v.size() != 0 && s[i] == ']' && v[v.size() - 1] == '[')
            {
                v.pop_back();
            }
            else if (v.size() != 0 && s[i] == '}' && v[v.size() - 1] == '{')
            {
                v.pop_back();
            }
            else
                return false;
        }

        if (v.size() != 0)
            return false;

        return true;
    }
};