#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,t;
	cin>>n;
	while(n--){
	    cin>>t;
	    if(t==2){
	        cout<<"2"<<endl;
	    }
	    else{
	        cout<<(t/2)+1<<endl;
	    }
	    
	}
	return 0;
}
