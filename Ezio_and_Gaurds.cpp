#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,apple,men;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin>>apple>>men;
	    if(apple<men)
	    {
	        cout<<"No\n";
	    }
	    else if(apple==men)
	    {
	        cout<<"Yes\n";
	    }
	    else 
	        cout<<"Yes\n";
	}
	return 0;
}
