#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	long int t;
	cin>>n;
	while(n--){
	    cin>>t;
	    if(t>=67 && t<=45000){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
