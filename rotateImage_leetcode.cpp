class Solution {
public:
    void rotate(vector<vector<int>>& v) {
          int n = v.size(); 
         for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < i; j++)
                {
                        int temp = v[i][j]; 
                        v[i][j] = v[j][i]; 
                        v[j][i] = temp; 
                }
        }

        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < n/2; j++)
                {
                        int temp = v[i][n-1-j];
                        v[i][n-1-j] = v[i][j];
                        v[i][j] = temp;
                }
        }
    }
};
