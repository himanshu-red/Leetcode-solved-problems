class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> temp(arr);  
        int j = 0; 
        int i = 0;
        while (i < arr.size())
        {
            arr[i] = temp[j]; 
            if (temp[j] == 0)
            {
                if (i+1 < arr.size()) arr[i+1] = 0; 
                i+=1;
            }
            i++; 
            j++; 
        }
    }
};
