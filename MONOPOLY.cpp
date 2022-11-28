#include <iostream>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--)
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b<c)
    {
        cout<<"YES"<<endl;
    }
    else if(a+c<b)
    {
        cout<<"YES"<<endl;
    }
    else if(b+c<a)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

}
	return 0;
}
