#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,X,Y;
	cin>>t;
	while(t--)
	{
	    cin>>X>>Y;
	    int time=(X*107)/100;
	    if(Y<=time)
	    {
	        cout<<"Yes\n";
	    }
	    else 
	        cout<<"No\n";
	}
	return 0;
}
