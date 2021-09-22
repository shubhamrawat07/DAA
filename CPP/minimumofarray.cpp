#include<iostream>
using namespace std;
int minArray(int arr[],int n)
{
    if(n==1)
        return arr[0];
    return min(arr[n-1],minArray(arr,n-1));
}
int main()
{
    int arr[]={3,5,34,554,-2,357,45,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<minArray(arr,n);

}