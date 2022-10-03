#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a,b,c;
	cin>>n;
	for(int i=1;i<=n;i++){
	    cin>>a>>b>>c;
	    if(a>=b){
	        cout<<"PIZZA"<<endl;
	    }
	    else if(a>=c){
	        cout<<"BURGER"<<endl;
	    }
	    else{
	        cout<<"NOTHING"<<endl;
	    }
	}
	return 0;
}
