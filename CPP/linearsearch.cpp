#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}

int main()
{
    int arr[]={2,4,6,7,34};
    int x=6;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=linearSearch(arr,n,x);
    (result==-1)
        ? cout<<"Not present" 
        : cout<<"Present in index "<<result;
        return 0;
}