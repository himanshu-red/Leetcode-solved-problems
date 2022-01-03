class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char, int> occurences; 
        for (int i = 0; i< s.size(); i++)
        {
            occurences[s[i]]++; 
        }
        int fOccur = occurences[s[0]]; 
        for(auto &i : occurences)
        {
            if (fOccur != i.second)
                return false; 
        }
        return true; 
    }
};
