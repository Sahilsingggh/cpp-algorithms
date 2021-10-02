#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	while(n--){
	    
	    int t;
	    cin>>t;
	    int a[t];
	    
	    for(int i=0;i<t;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int j=0;
	    
	    for(int i=0;i<t;i++){
	        if(a[i]<0){
	            swap(a[i],a[j]);
	            j++;
	        }
	    }
	    
	    for(int i=0;i<t;i++){
	        cout<<a[i]<<" ";
	    }
	    
}
}
