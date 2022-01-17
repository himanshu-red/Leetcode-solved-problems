class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string, char> m; 
        vector<string> hash(27, "0"); 
        vector<string> vec; 
        string temp; 
        for (int i = 0; i< s.size(); i++)
        {
            if (s[i] == ' ') 
            {
                vec.push_back(temp); 
                temp.clear(); 
            }
            else 
            {
                temp += s[i]; 
            }
        }
        vec.push_back(temp); 
        // for (auto &i : vec) cout << i << endl; 
        if (vec.size() != pattern.size()) return false; 
        for (int i = 0; i< vec.size(); i++)
        {
            int j = pattern[i] - 96; 
            if (m.find(vec[i]) == m.end()) m[vec[i]] = pattern[i]; 
            else if (m[vec[i]] != pattern[i]) return false; 
            if (hash[j] == "0") hash[j] = vec[i]; 
            else if (hash[j] != vec[i]) return false; 
        }
        return true; 
        
    }
};
