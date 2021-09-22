#include<iostream>
using namespace std;
void display(int arr[],int i,int n)
{
    if(i==n)
        return;
    cout<<arr[i]<<endl;
    display(arr,i+1,n);
    

}

int main()
{
    int arr[]={10,20,22,3,1,64,23};
    int n= sizeof(arr)/sizeof(arr[0]);
    display(arr,0,n);
}