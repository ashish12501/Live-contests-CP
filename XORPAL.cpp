// Problem Link - https://www.codechef.com/FEB222C/problems/XORPAL

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, one = 0, zero = 0;
        cin >> n;
        string s;
        cin >> s;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    one++;
                }
                else
                {
                    zero++;
                }
            }
            if (one == zero)
            {
                cout << "YES" << endl;
            }
            else if (one == 0 || zero == 0)
            {
                cout << "YES" << endl;
            }
            else if (one % 2 == 0 || zero % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}