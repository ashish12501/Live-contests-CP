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
        int x[n], y[n], counter1 = 0, counter2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i] >> y[i];
        }

        for (int i = 0; i < n; i++)
        {
            int j;
            for (j = 0; j < i; j++)
                if (x[i] == x[j])
                    break;

            if (i == j)
                counter1++;

            int k;
            for (k = 0; k < i; k++)
                if (y[i] == y[k])
                    break;

            if (i == k)
                counter2++;
        }
        cout << counter1 + counter2 << endl;
    }
    return 0;
}