#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
     cin>>n;
     while(n--)
     {
        int t,ct=0,ct1=0,ct2=0,ct3=0;
        cin>>t;
        char a[t],b[t];
        for(int i=0;i<t;i++)
        {
            cin>>a[i];
            if(a[i]=='0')
            {
                ct++;
            }
            else if(a[i]=='1')
            {
                ct1++;
            }
        }
        for(int i=0;i<t;i++)
        {
            cin>>b[i];
            if(b[i]=='0')
            {
                ct2++;
            }
            else if(b[i]=='1')
            {
                ct3++;
            }
        }
        if(ct1==ct3)
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
