#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>arr;
    // cout<<arr.at(1);
    // for(int i=0;i<5;i++)
    // {
    //     cout<<arr.at(i)<<" ";
    // }
    arr.push(5);    
    arr.push(3);
    arr.push(2);
    arr.push(1);
    while(!arr.empty())
    {
        cout<<arr.top()<<" ";
     arr.pop();
    }
}
