#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,num1,num2;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin>>num1>>num2;
	    if(num1>num2)
	    {
	        cout<<num1-num2<<endl;
	    }
	    else
	        cout<<num2-num1<<endl;
	}
	return 0;
}
