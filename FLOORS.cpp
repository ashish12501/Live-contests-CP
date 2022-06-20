#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	   // if((abs(x-y)/10.0)-(abs(x-y)/10)>0) cout<<abs(x-y)/10<<endl;
	   // else cout<<(abs(x-y)/10.0)+1<<endl;
	   cout<<abs(((x-1)/10)-((y-1)/10))<<endl;
	}
	return 0;
}
