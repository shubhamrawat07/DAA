#include<iostream>
using namespace std;
int search(int a[],int n,int k)
{
   	 int i,c;
    	int m=n/2;
	if(a[m]==k)
        	return m;
	if(a[m]>k)
   {
     	c=0;
   	for(i=m-1;m>=0;m--)
   	{
      		if(a[i]==k)
           	c++;
   	}
   	return c;
   }
   else
   {
      c=0;
      for(i=m+1;m<=n;i++)
    {
       if(a[i]==k)
           c++;
    }
     return c;
   }
   
	return 0;
}
int main(void)
{
	int num,k,c,i,n,j;
	cin>>num;
	for(j=0;j<num;j++)
	{
    	cin>>n;
    	int a[n];
    	for(i=0;i<n;i++)
    		cin>>a[i];
	cin>>k;
	int r=search(a,n,k);
	if(r==0)
   		cout<<"Not found"<<endl;
	else
   		cout<<"Present: "<<k<<"-"<<r<<endl; 
	}
}