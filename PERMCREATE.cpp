#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t)
	{
	    int a;
	    cin>>a;
	    if(a>=4){
	        int j=0,k=1;
	        for(int i=1;i<=a;i++){
	            j+=2;
	            if(j<=a){
	                cout<<j<<" ";
	                continue;
	            }
	            if(k<=a){
	                cout<<k<<" ";
	            }
	            else{
	                break;
	            }
	            k+=2;
	        }
	    }
	        else{
	            cout<<-1<<endl;
	        }
	    t--;
	}
	return 0;
}
