#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
      int a,b,c=0;
      cin>>a>>b;
      if (a%3==0 || b%3==0)
      {
          cout<<"0"<<endl;
      }
      else if (abs(a-b)%3==0)
      {
         cout<<1<<endl;
      }
      else cout<<"2"<<endl;
    }
}