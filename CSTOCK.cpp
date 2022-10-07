#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d,e;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c>>d;
	    e= (a*(100+d))/100;
	    if(e>=b && e<=c){
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
