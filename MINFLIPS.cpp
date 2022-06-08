#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
       int n , pos=0, neg=0,max,min;
       cin>>n;
       int a[n];
       for (int i = 0; i < n; i++) {
           cin>>a[i];
           if(a[i]==1) pos++;
           else neg++;
       }
       if(n&1) cout<<-1<<endl;
       else{
       if(pos>neg) max=pos,min=neg;
       else max=neg,min=pos;
       double ans = (max-min)/2.0;
       if(max==min) cout<<"0"<<endl;
       else cout<<ans<<endl;
       }
    }
       return 0;
}
