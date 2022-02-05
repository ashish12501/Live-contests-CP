// Problem link- https://www.codechef.com/FEB221C/problems/EUREKA

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x;
    float f;
    cin>>t;
    while(t--)
    {
        float x,f,a;
        cin>>x;
        f=(0.143*x);
        a = f;
        for(int i=1;i<x;i++){
            a=a*f;
        }
        if(a-floor(a)<0.5){
        cout<<floor(a)<<endl;
        }
        else{
        cout<<floor(a)+1<<endl;
        }
    }

    return 0;
}