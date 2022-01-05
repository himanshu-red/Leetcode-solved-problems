class Solution {
public:
    long long convertStrToInt(string str)
    {
        stringstream ss; 
        long long temp; 
        ss << str; 
        ss >> temp ;
        return temp; 
    }
    
    int evalRPN(vector<string>& tokens) {
    vector<long long> Stack;
    stringstream ss; 
    int temp; 
        
    for (int i = 0; i < tokens.size(); i++)
    {
        string str = tokens[i];
        if (isdigit(str[str.size()-1])) 
        {
            Stack.push_back(convertStrToInt(str)); 
        }
        else    
        {
            int size = Stack.size();
            long long a = Stack[size - 1];
            long long b = Stack[size - 2];
            Stack.pop_back();
            Stack.pop_back();
            
            switch (tokens[i][0])
            {
                case '+':
                    Stack.push_back(b + a);
                    break;

                case '-':
                    Stack.push_back(b - a);
                    break;

                case '*':
                    Stack.push_back(b * a);
                    break;

                case '/':
                    Stack.push_back(b / a);
                    break;
            }
        }
    }
        
    return Stack[0];
        
    }
};
