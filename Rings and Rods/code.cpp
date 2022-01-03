class Solution {
public:
    int countPoints(string rings) {
        vector<bool> r(10, false); 
        vector<bool> g(10, false); 
        vector<bool> b(10, false);
        
        int count = 0; 
        
        for (int i = 0;i< rings.size(); i+=2)
        {
            int ringNo = rings[i+1]-48; 
            
            switch(rings[i])
            {
                case 'R':
                    r[ringNo] = true; 
                    break; 
                case 'G':
                    g[ringNo] = true; 
                    break; 
                case 'B':
                    b[ringNo] = true; 
                    break; 
            }
        }
        
        for (int i = 0; i< 10; i++)
        {
            if (r[i] && g[i] && b[i])
                count++; 
        }
        return count; 
    }
};
