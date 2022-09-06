#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num1,num2,t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>num1>>num2;
	    if(num1<num2)
	    {
	        cout<<"FIRST\n";
	    }
	    else if(num1==num2)
	    {
	        cout<<"ANY\n";
	    }
	    else
	        cout<<"SECOND\n";
	}
	return 0;
}
