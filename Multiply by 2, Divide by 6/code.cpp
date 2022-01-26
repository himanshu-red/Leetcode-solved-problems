#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int count = 0;
        while (n > 1)
        {
            if (n % 6 == 0)
                n /= 6;
            else
                n *= 2;
            count++;
        }
        if (n == 1)
            cout << count << endl; 
        else 
            cout << -1 << endl; 
    }
}
