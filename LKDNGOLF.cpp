#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    
    for(int i=1; i<=T;i++)
    {
        int N,x,k;
        cin>>N>>x>>k;
        
        if(x%k==0)
        
        {
            cout<<"YES"<<endl;
            
        }
        else if((N+1-x)%k==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    
        
        
    }
	// your code goes here
	return 0;
}
