#include<iostream>
using namespace std;
void indicies(int arr[],int i,int key,int n)
{
    if(i==n)
        return;
    if(arr[i]==key)
         cout<<i<<"  ";
    indicies(arr,i+1,key,n);
    
}
int  main()
{
   int a[]={1,4,3,4,5,4};
   indicies(a,0,4,6);
   
   return 0;
}