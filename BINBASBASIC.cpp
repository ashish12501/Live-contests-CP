// problem link - https://www.codechef.com/FEB221C/problems/BINBASBASIC
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n, k, count = 0;
      cin >> n >> k;
      string s;
      cin >> s;
      for (int i = 0; i < n / 2; i++)
      {
         if (s[i] != s[n - i - 1])
         {
            count++;
         }
      }
      int p = k - count;
      if ((p >= 0 && p % 2 == 0) || ((p >= 0) && n % 2 == 1))
      {
         cout << "YES" << endl;
      }
      else
      {
         cout << "NO" << endl;
      }
   }
   return 0;
}