#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,k;
	cin>>t;
	while(t){
	    int n;
	    cin>>n;
	    int a[n];
	    int count =0;
	    
	    for(int j=0;j<n;j++){
	        cin>>a[j];
	    }
	    for(int j=0;j<n;j++){
	        if(a[j]<=7)
	        {
	            count++;
	        }
	        if(count==7){
	            break;
	        }
	         k = j+1;
	    }
	    cout<<k+1<<endl;
	    t--;
	    
	}
	return 0;
}
