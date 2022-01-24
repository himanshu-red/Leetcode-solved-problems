class Solution {
public:
    bool checkCaps(char ch)
    {
        return (ch >= 'A' && ch <= 'Z'); 
    }
    bool detectCapitalUse(string word) {
        int capsCount = 0; 
        bool firstLetter = checkCaps(word[0]); 
        for (int i = 0; i< word.size(); i++)
        {
            
            if (checkCaps(word[i])) capsCount++; 
        }
        if (!firstLetter && capsCount == 0) return true; 
        if (firstLetter && (capsCount == 1 || capsCount == word.size())) return true; 
        return false; 
    }
};
