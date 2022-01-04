class Solution {
public:
    pair<int, int> sumCarry(char a, char b, int carry)
    {
        stringstream sa; 
        stringstream sb; 
        int digA; 
        int digB; 
        sa << a; 
        sb << b; 
        sa >> digA; 
        sb >> digB; 
        int sum = digA + digB + carry; 
         if (sum == 2 || sum == 3)
            carry = 1; 
        else
            carry = 0; 
        if (sum == 1 || sum == 3)
            sum = 1; 
        else
            sum = 0;
       
        return {sum, carry}; 
    }
     pair<int, int> sumCarry(char a, int carry )
    {
        stringstream sa; 
        int digA; 
        sa << a; 
        sa >> digA;  
        int sum = digA + carry; 
         if (sum == 2 || sum == 3)
            carry = 1; 
         else
             carry = 0;
        if (sum == 1 || sum == 3)
            sum = 1; 
         else
             sum = 0; 
         
        return {sum, carry}; 
    }
    char resChar(int sum)
    {
        if (sum ==2 || sum == 0)
            return '0'; 
        else 
            return '1'; 
    }
    
    string addBinary(string a, string b) {
        int sum; 
        int carry = 0; 
        string res;
        pair<int, int> sumCar;
        reverse(a.begin(),a.end()); 
        reverse(b.begin(), b.end()); 
        int i = 0; 
        int j = 0; 
        while (i < a.size() && j < b.size())
        {
            sumCar = sumCarry(a[i], b[j], carry);
            sum = sumCar.first; 
            carry = sumCar.second; 
            res += resChar(sum); 
            i++; 
            j++; 
        }
        while (i < a.size())
        {
            sumCar = sumCarry(a[i], carry); 
            sum  = sumCar.first; 
            carry = sumCar.second; 
            res += resChar(sum); 
            i++; 
        }
        while (j < b.size())
        {
            sumCar = sumCarry(b[j], carry); 
            sum  = sumCar.first; 
            carry = sumCar.second; 
            res += resChar(sum); 
            j++; 
        }
        if (carry)
        {
            res += '1'; 
        }
        reverse(res.begin(), res.end()); 
        return res; 
        
    }
};
