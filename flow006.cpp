#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int num;
        cin>>num;
        int sum=0,a;
        while(num>0)
        {
            a=num%10;
            sum=sum+a;
            num=num/10;
            
        }
        cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
