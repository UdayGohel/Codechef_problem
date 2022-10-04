#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b,c,d,e;
	cin>>n;
	while(n--){
	    cin>>a>>b>>c>>d>>e;
	    
	    if(a+b<=d && c<=e){	    
	        cout<<"YES"<<endl;
	    }
	    else if(a+c<=d && b<=e){
	        cout<<"YES"<<endl;
	    }
	    else if(b+c<=d && a<=e){
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
