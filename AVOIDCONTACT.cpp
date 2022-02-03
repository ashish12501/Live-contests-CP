// problem link - https://www.codechef.com/START24C/problems/AVOIDCONTACT

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
        if(x!=y){
            cout<<(y*2)+(x-y)<<endl;
        }
        else{
            cout<<(y*2)-1<<endl;
        }
    }
    
}