#include<iostream>
using namespace std;
int occurence(int arr[],int i,int key)
{
    if(i<0)
        return -1;
    if(arr[i]==key)
        return i;
    return occurence(arr,++i,key);
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int key;
    cin>>key;
    cout<<occurence(arr,0,key);
    return 0;
}