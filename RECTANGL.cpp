#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b,c,d;
	cin>>n;
	while(n--){
	    cin>>a>>b>>c>>d;
	    if((a==b && c==d) || (a==c && b==d) ||( a==d && b==c))
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
