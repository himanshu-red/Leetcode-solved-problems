class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int> res; 
        
        for (int i = 0; i< s.size(); i++)
        {
            int x = startPos[0]; 
            int y = startPos[1]; 
            int commands = 0;
            
            for (int j = i; j<s.size(); j++)
            {
                bool moved = false; 
                switch(s[j])
                {
                    case 'L':
                        if (y > 0)
                        {
                            y--; 
                            moved = true ;
                        }
                        break; 
                        
                    case 'R':
                        if (y < n-1)
                        {
                            y++; 
                            moved = true ;
                        }
                        break; 
                        
                    case 'U':
                        if (x > 0)
                        {
                            x--; 
                            moved = true ;
                        }
                        break; 
                    
                    case 'D':
                        if (x < n-1)
                        {
                            x++; 
                            moved = true ;
                        }
                        break; 
                    
                    default:
                        break; 
                        
                }
                if (moved)
                    commands++; 
                else 
                    break; 
            }
            res.push_back(commands); 
        }
        return res; 
    }
};
