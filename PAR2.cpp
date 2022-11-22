#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,t;
	cin>>t;
	for(int i=1;i<=t;i++){
	cin>>n;
	if(n%2==0)
	{
	    cout<<"Yes"<<endl;
	}
	else if(n%2==1)
	{
	    cout<<"No"<<endl;
	}
	}
	return 0;
}
