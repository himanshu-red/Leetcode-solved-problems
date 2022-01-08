class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string> s; 
    string str; 
    
    for (int i = 0; i < words.size(); i++)
    { 
        for(int j = 0; j<words[i].size(); j++)
        {
            str += morse[words[i][j] - 97];
        }
        s.insert(str); 
        str.clear(); 
    }
    return s.size(); 
    }
};
