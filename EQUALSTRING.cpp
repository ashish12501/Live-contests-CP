#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string a, b;
        set<char>st;
        cin >> a;
        cin >> b;
        for (int i = 0; i < n; i++)
            if (a[i] != b[i])
                st.insert(b[i]);
        cout<<st.size()<<endl;
    }
}