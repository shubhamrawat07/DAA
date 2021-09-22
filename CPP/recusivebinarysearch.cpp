#include<iostream>
using namespace std;
int binarySearch(int arr[],int l,int r, int x)
{
    if(r>=l)
    {
        int mid = (l+r)/2;
        if(arr[mid]==x)
            return mid;
        else if (arr[mid]>x)
            return binarySearch(arr,l,mid-1,x);
        else   return binarySearch(arr,mid+1,r,x);
    }
    return -1;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int x=2;
    int result=binarySearch(arr,0,5,x);
    (result==-1)?cout<<"Element not present in array" 
        : cout<<"ELement present in array in index "<<result;
}