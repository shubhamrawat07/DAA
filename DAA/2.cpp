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
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {    
         int size, key;
        cin>>size;
        int arr[size];
        for(int j=0;j<size;j++)
            cin>>arr[j];
        cin>>key;
        int ans=binarySearch(arr,0,size,key); 
        if(ans==-1)
            cout<<"Not Present : "<<size<<endl;
        else
            cout<<"Present : "<<ans+1<<endl;  
    }  
}  
