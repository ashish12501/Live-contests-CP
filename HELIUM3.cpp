// Problem link - https://www.codechef.com/FEB222C/problems/HELIUM3

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      int a,b,x,y;
      cin>>a>>b>>x>>y;
      if (a*b<=x*y)
      {
          cout<<"yes"<<endl;
      }
      else{
          cout<<"no"<<endl;
      }
    }
  return 0;
}