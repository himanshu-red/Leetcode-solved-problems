class Solution {
public:
    int findComplement(int num) {
        bool foundFirstSet = false ;
        for (int i = 31; i>= 0; i--)
        {
            if (num & (1 << i))
            {
                foundFirstSet = true;
            }
            if (foundFirstSet)
            {
                num = (num ^ (1 << i)); 
            }
            
        }
        return num; 
    }
};
