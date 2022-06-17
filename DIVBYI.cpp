#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,g;
    cin >> t;
    while (t--)
    {
     int n ,d ,ds[n];
     cin>>n;
     g=n;
     ds[n-1]=n;
     for (int i = 1; i < n; i++){
      if(i%2!=0){
         ds[n-1-i]=g-(n-i);
         g=ds[n-1-i];
      }
      else if(i%2==0){
         ds[n-1-i]=g+(n-i);
         g=ds[n-1-i];
      }
     }
     for (int i = 0; i < n; i++)
     {
       cout<<ds[i];
     }
     cout<<endl;
    }
}