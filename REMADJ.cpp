#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[n], op = 0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                max = a[i];
                op++;
            }
        }
        if (n == 2)
        {
            max = a[0] + a[1];
            op++;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if ((a[i] + a[i + 1]) == max)
                {
                    a[i] = a[i] + a[i + 1];
                    op++;
                }
                else if (a[i] == a[i + 1])
                {
                    op == op;
                }
            }
        }
        cout << op << endl;
    }
    return 0;
}