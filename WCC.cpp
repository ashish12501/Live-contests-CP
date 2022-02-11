// Problem link -https://www.codechef.com/FEB222C/problems/WCC

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, c = 0, n = 0, d = 0,chefPt,carlsenPt;
        string a;
        cin >> x;
        for (int i = 0; i < 14; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 14; i++)
        {
            if (a[i] == 'C')
            {
                c++;
            }
            else if (a[i] == 'D')
            {
                d++;
            }
            else if (a[i] == 'N')
            {
                n++;
            }
        }
        carlsenPt=c*2+d*1;
        chefPt=n*2+d*1;
        if (carlsenPt>chefPt)
        {
            cout<<x*60<<endl;
        }
        else if(carlsenPt<chefPt)
        {
            cout<<x*40<<endl;
        }
        else if(carlsenPt==chefPt)
        {
            cout<<x*55<<endl;
        }
    }
    return 0;
}