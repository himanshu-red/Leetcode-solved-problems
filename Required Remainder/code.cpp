#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x, y, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        int mod = n % x;
        if (mod == y)
        {
            cout << n << endl;
        }
        else if (mod > y)
        {
            cout << n - (mod - y) << endl;
        }
        else
        {
            n -= mod;
            n -= (x - y);
            cout << n << endl;
        }
    }
}
