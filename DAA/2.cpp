#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int k)
{
   int i,c=0;
   int m=n/2;
   if(a[m]==k)
       return m;
   if(a[m]>k)
   {
   	for(i=m-1;m>=0;m--)
   	{
       		if(a[i]==k)
          	return i;
  	}
   }
   else
   {
      for(i=m+1;m<=n;m++)
    {
       if(a[i]==k)
           return i;
    }
   }  
     return -1;
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
    		{
   			 cin>>a[i];
    		}
	cin>>k;
	int r=binarysearch(a,n,k);
	if(r==-1)
   		cout<<"Not Present :"<<n<<endl;
	else
  		cout<<"Present: "<<r+1<<endl; 
	}
}