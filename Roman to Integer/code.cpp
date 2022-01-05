class Solution
{
public:
    int check_val(char c)
    {
        int m;
        switch (c)
        {
        case 'I':
        {
            m = 1;
            break; 
        }
        case 'V':
        {
            m = 5;
            break; 
        }
        case 'X':
        {
            m = 10;
            break; 
        }
        case 'L':
        {
            m = 50;
            break; 
        }
        case 'C':
        {
            m = 100;
            break; 
        }
        case 'D':
        {
            m = 500;
            break; 
        }
        case 'M':
        {
            m = 1000;
            break; 
        }
        default:
        {
            break;
        }
        }
        return m;
    }
    int check_val(char c1, char c2)
    {
        int m;
        if (c1 == 'I' && c2 == 'V')
            m = 4;
        else if (c1 == 'I' && c2 == 'X')
            m = 9;
        else if (c1 == 'X' && c2 == 'L')
            m = 40;
        else if (c1 == 'X' && c2 == 'C')
            m = 90;
        else if (c1 == 'C' && c2 == 'D')
            m = 400;
        else if (c1 == 'C' && c2 == 'M')
            m = 900;
        else
            m = -1;
        return m;
    }
    int romanToInt(string s)
    {
        int i = 1;
        int val = check_val(s[0]);
        while (i < s.size())
        {
            int single = check_val(s[i]); 
            int pair = check_val(s[i-1],s[i]); 
            if (pair != -1)
            {
                val -= check_val(s[i-1]);
                val += pair;
            }
            else 
            {
                val += single; 
            }
            i++;
        }
        return val;
    }
};
