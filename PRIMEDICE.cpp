#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	
	while(t--)
	{
	    cin>>a>>b;
	    if(a+b==2|| a+b==3||a+b==5||a+b==7||a+b==11){
	        cout<<"Alice"<<endl;
	    }
	    else{
	        cout<<"Bob"<<endl;
	    }
	   
	    
	}
	
	return 0;
}
