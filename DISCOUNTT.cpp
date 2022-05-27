#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
            int n,x,y,actual=0,afterCoupon=0;
            cin>>n>>x>>y;
            int a[n];
            for(int i=0;i<n;i++){
               cin>>a[i];
               actual+=a[i];
            } 
            for (int i = 0; i < n; i++)
            {
              if (a[i]>y) a[i]=a[i]-y;
              else a[i]=0;
              afterCoupon+=a[i];
            }
            if(afterCoupon+x<actual) cout<<"COUPON"<<endl;
            else cout<<"NO COUPON"<<endl;
    }
}