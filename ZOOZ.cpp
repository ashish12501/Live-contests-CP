#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	if(n==3)cout<<"010";
	else if (n==4) cout<<"1001";
    else if(n%2==0){
        int c =(n-4)/2;
        for(int i=0; i<c;i++)cout<<1;
        cout<<"1001";
        for(int i=0; i<c;i++)cout<<1;
    }
    else{
        int c=(n-3)/2;
        for(int i=0; i<c;i++)cout<<1;
        cout<<"010";
        for(int i=0; i<c;i++)cout<<1;
        
    }
    cout<<endl;
	}
	return 0;
}
