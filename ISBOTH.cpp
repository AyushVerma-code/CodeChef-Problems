#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    if(N%5==0&&N%11==0)
        cout<<"BOTH";
    else if(N%5==0||N%11==0)
        cout<<"ONE";
    else if(N%5!=0||N%11!=0)
        cout<<"NONE";
	// your code goes here
	return 0;
}
