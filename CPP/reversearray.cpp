#include<iostream>
using namespace std;
void reverse(int arr[],int i,int n)
{
    if(i==n)
        return;
    reverse(arr,i+1,n);
    cout<<arr[i]<<"  ";
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,0,n);
}
