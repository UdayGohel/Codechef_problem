#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,a;
    cin>>n;
	for(int i=1;i<=n;i++)
	{
	    cin>>a;
	    int b =a/25;
        int c=a%25;

        if(c>0 ){
            cout<<b+1<<endl;
        }
        else if(c==0){
            cout<<b<<endl;
        }

	    
	}
	return 0;
}