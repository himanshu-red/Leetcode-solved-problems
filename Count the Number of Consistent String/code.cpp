class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<char> hash(27, 0); 
        int charNum; 
        int count = 0; 
        for (int i = 0; i< allowed.size(); i++)
        {
            charNum = allowed[i] - 96; 
                hash[charNum] = 1; 
        }
        for (int i = 0; i < words.size(); i++)
        {
            bool distinct =true; 
            for (int j = 0; j<words[i].size(); j++)
            {
                charNum = words[i][j] - 96;
                if (hash[charNum] == 0)
                {
                    distinct = false; 
                    break; 
                }
                    
            }
            if (distinct)
                count++; 
        }
        return count; 
    }
};
