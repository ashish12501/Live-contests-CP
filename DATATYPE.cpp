// Problem link - https://www.codechef.com/problems/DATATYPE
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    { 
      int n,x,z;
      cin>>n>>x;
      while(true)
      {
      if (x<=n)
      {
        cout<<x<<endl;
      }
      else{
          x=x%(n+1);
      }
      }
    }
    return 0;
}


