#include<iostream>
using namespace std;
int insertion(int a[],int n)
{
    int i=0,j=0,min=0,pos=0,c=0;
    for(i=0;i<n;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
            	min=a[j];
            	pos=j;
            }
            c++;
        }
        if(pos!=i)
        {
       		a[pos]=a[i];
        	a[i]=min;
        }        
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl<<"comparisons ="<<c;
    cout<<endl<<"swaps ="<<n-1;
   
}
int main()
{
    int m,i;
    cin>>m;
    for(i=0;i<m;i++)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(i=0;i<n;i++)
        	cin>>a[i];
    	insertion(a,n); 
    }
    return 0;
}