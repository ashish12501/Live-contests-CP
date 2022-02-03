// Problem link- https://www.codechef.com/START24C/problems/EVMHACK

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,p,q,r,sum,R=0;
	    cin>>a>>b>>c>>p>>q>>r;
	    if(R==0)
	    {
	        sum=p+b+c;
	        if(sum>(p+q+r)/2){
	            R=1;
	        }
	    }
	    if(R==0)
	    {
	        sum=q+a+c;
	        if(sum>(p+q+r)/2){
	            R=1;
	        }
	    }
	    if(R==0)
	    {
	        sum=r+a+b;
	        if(sum>(p+q+r)/2){
	            R=1;
	        }
	    }
	    if(R==1){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
