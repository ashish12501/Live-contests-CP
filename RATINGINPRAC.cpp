#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        bool status = true;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1]) status = false;

        if (status == true)
            cout << "yes"<<endl;
        else
            cout << "no"<<endl;
        
    }
    return 0;
}