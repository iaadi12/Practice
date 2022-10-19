//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    void merge(int arr[], int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}
//      void merge(int arr[], int l, int h)
//     {
//          // Your code here
//          int mid=(l+h)/2;
//          int len1=mid-l+1;
//          int len2=h-mid;
//          int *first=new int[len1];
//          int *second=new int[len2];
//          int mainArrayIndex=l;
//          for(int i=0;i<len1;i++)
//          {
//              first[i]=arr[mainArrayIndex++];
//          }
//          mainArrayIndex=mid+1;
//          for(int i=0;i<len1;i++)
//          {
//              second[i]=arr[mainArrayIndex++];
//          }
//          int index1=0;
//          int index2=0;
//          mainArrayIndex=s;
//          while(index1<len1 && index2<len2)
//          {
//              if(first[index]<second[index])
//              {
//                  arr[mainArrayIndex++]=first[index++];
//              }
//              else
//              {
//                  arr[mainArrayIndex++]=second[index++];
//              }
//          }
//          while(index1<len1 && index2<len2)
//          {
//              if(index1<len1)
//              {
//                  arr[mainArrayIndex++]=first[index++];
//              }
//              else
//              {
//                  arr[mainArrayIndex++]=first[index++];
//              }
//          }
//     }

// void mergeSort(int *arr, int s, int e) {

//     //base case
//     if(s >= e) {
//         return;
//     }
    
//     int mid = (s+e)/2;

//     //left part sort karna h 
//     mergeSort(arr, s, mid);
    
//     //right part sort karna h 
//     mergeSort(arr, mid+1, e);

//     //merge
//     merge(arr, s, e);

// }
    void Solve(int arr[],int l,int r)
    {
        if(l>=r)return;
        int mid=(l+r)/2;
        Solve(arr,l,mid);
        Solve(arr,mid+1,r);
        merge(arr,l,r);
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        Solve(arr,l,r);
        
        
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
