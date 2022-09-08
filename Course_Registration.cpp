#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,N,M,K;
	cin>>t;
	while(t--)
	{
	    cin>>N>>M>>K;
	    int avail_seat;
	    avail_seat=M-K;
	    if(avail_seat>=N)
	    {
	        cout<<"Yes\n";
	    }
	    else
	        cout<<"No\n";
	}
	return 0;
}
