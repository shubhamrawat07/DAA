#include <iostream>
using namespace std;
void binarysearch(int a[],int n)
{
     int c=0;
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             for(int k=j+1;k<n;k++)
             {
             	if(a[i]+a[j]==a[k])
             	{
                 	cout<<i+1<<","<<j+1<<","<<k+1;
                 	c++;
            	}
             }
     	}
    }
if(c==0)
    cout<<"No Sequence Found";
}
int main()
{
	int i,n,j;
	cin>>n;
	for(j=0;j<n;j++)
	{
    	cin>>n;
   	int a[n];
    	for(i=0;i<n;i++)
    		cin>>a[i];
	binarysearch(a,n);
	}
}