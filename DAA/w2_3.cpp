#include <iostream>
using namespace std;
void search(int a[],int n,int k)
{
     int c=0;
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             
             if(a[i]-a[j]==k || a[j]-a[i]==k)   
                 c++;
         }
     } 
 	cout<<c;
}
int main()
{
	int i,n,j,k; 
	cin>>n;
	for(j=0;j<n;j++)
	{
    		cin>>n;
    		int a[n];
    		for(i=0;i<n;i++)
    			cin>>a[i];
		cin>>k;
		search(a,n,k);
	}
}