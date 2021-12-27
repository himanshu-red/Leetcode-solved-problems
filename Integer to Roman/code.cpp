class Solution {
public:
    string dataBase(int split)
    {
        string result; 
        while (split > 0)
        {
            int prev = split; 
            switch(split)
            {
                case 900:
                    result +="CM"; 
                    split -= 900; 
                    break; 
                    
                case 400:
                    result += "CD"; 
                    split -= 400; 
                    break; 
                    
                case 90:
                    result+= "XC"; 
                    split -= 90; 
                    break; 
                    
                case 40:
                    result += "XL"; 
                    split -= 40; 
                    break; 
                    
                case 9:
                    result += "IX"; 
                    split -= 9; 
                    break; 
                
                case 4 : 
                    result += "IV"; 
                    split -= 4; 
                    break; 
            }
            
            if(split >= 1000)
            {
                split -= 1000; 
                result += "M"; 

            }
            else if (split == 500)
            {
                split -= 500; 
                result += "D"; 
            }
            else if (split >= 100)
            {
                split -= 100; 
                result += "C"; 
            }
            else if (split == 50)
            {
                split -= 50; 
                result += "L"; 
            }
            else if (split >= 10)
            {
                split -=10; 
                result += "X"; 
            }
            else if (split == 5)
            {
                split -= 5; 
                result += "V"; 
            }
            else if (split >= 1)
            {
                split -= 1; 
                result += "I"; 
            }
        }
        return result; 
    }
    string intToRoman(int num) {
        string result; 
        int tens = pow(10,floor(log10(num))); 
        vector<int> splits; 
        while (num > 0)
        {
            int split = (num / tens) * tens; 
            int half = pow(10, floor(log10(split)+1))/2;
            if (split >= 900)
            {
                result += dataBase(split);
            }
            else if (split <= half || split == tens * 9)
            {
                result += dataBase(split); 
            }
            else 
            {
                result += dataBase(half); 
                result += dataBase(split - half); 
            }
            num = num % tens; 
            tens/=10;
        }
        return result; 
    }
};
