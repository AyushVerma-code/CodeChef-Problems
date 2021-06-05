#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    int a,b,c,d,e,f;
    int ans;
    
    for(int i=1;i<=T;i++)
    {
        cin>>a>>b>>c>>d;
        e=(c/a);
        f=(d/b);
        ans=e+f;
        cout<<ans<<endl;
        
    }
        
        
	// your code goes here
	return 0;
}
