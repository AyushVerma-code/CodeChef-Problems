#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    
    int s;
    
    for(int i=1; i<=t; i++)
    {
         int X;
        cin>>X;
    
         int A;
         cin>>A;
    
          int B;
          cin>>B;
    
         s= (A+ (100-X)*B)* 10;
         cout<<s<<endl;
    
    }
  
    
    
	// your code goes here
	return 0;
}
