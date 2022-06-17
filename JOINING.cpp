#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
     int n,k,p,q;
     cin>>n>>k;
     p=n/5;
     q=k/5;
     if(n%5==0 && n>0) 
     p--;

     if(k%5==0) 
     q--;
     cout<<p-q<<endl;
    }
    return 0;
}