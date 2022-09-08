#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int n;
	cin>>n;
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
	    int x;
	    cin>>x;
	    if(x%2==0)
	        cnt++;
	}
	if(cnt>n-cnt)
	{
	    cout<<"READY FOR BATTLE\n";
	}
	else
	    cout<<"NOT READY\n";
	return 0;
}
