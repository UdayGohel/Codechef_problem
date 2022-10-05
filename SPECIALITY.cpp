#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a,b,c;
	while(n--){
	    cin>>a>>b>>c;
	    if(a>b && a>c)
	    {
	        cout<<"Setter"<<endl;
	    }
	    else if(c>a && c>b){
	        cout<<"Editorialist"<<endl;
	    }
	    else if(b>c && b>a){
	        cout<<"Tester"<<endl;
	    }
	}
	return 0;
}
