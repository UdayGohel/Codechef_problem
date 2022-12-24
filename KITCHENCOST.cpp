#include <iostream>
using namespace std;

int main() {
	// your code goes here
int n;
cin>>n;
while(n--)
{
	    int t,x,sum=0;
	    cin>>t>>x;
	    int a[t];
        int b[t];
	    for(int i=0;i<t;i++)
	    {
	        cin>>a[i];
	    }

	    for(int i=0;i<t;i++)
	    {
	        cin>>b[i];
        }

	    for(int i=0;i<t;i++)
	    {
	        if(a[i]>=x)
	        {
	            sum=sum+b[i];
	        }
	    }
	    cout<<sum<<endl;
}
	return 0;
}
