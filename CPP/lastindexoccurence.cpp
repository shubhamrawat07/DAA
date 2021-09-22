#include<iostream>
using namespace std;
int lastIndex(int arr[],int i,int key,int n)
{
    if(i==n)
        return -1;
    int idx= lastIndex(arr,i+1,key,n);
    if(idx!=-1)
        return idx;
    else if(arr[i]==key)
        idx=i;
    return idx;
   
}  
int main()
{
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];
    }
    int key;
    
    cin>>key;
    cout<<lastIndex(arr,0,key,n);
    return 0;
}