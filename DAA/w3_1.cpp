#include<iostream>
using namespace std;
int insertion(int a[],int n)
{
    int i,j,t,c=0,p=0;
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0 && t<=a[j])
        {
            a[j+1]=a[j];
            j=j-1;
            c++;
            p++;
        }
        p++;
        a[j+1]=t;
      
       }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"comparisons = ";
    cout<<c;
    cout<<endl<<"shifts = "<<p;   
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