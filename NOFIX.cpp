// Problem link - https://www.codechef.com/FEB222C/problems/NOFIX

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], k = 1, counter = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == i + k)
            {
                counter++;
                k++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}