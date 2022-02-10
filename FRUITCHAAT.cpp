#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int x2=x/2;
        if (x2<y)
        {
            cout<<x2<<endl;
        }
        else{
        cout<<y<<endl;
        }
    }
    
    return 0;
}