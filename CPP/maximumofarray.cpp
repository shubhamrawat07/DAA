#include<iostream>
using namespace std;
int maxArray(int arr[],int n)
{
    if(n==1)
        return arr[0];
     return max(arr[n-1], maxArray(arr, n-1));
}

int main()
{
    int arr[]={1,2,3,4,345,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxArray(arr,n);
    return 0;
}