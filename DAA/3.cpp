#include<iostream>
using namespace std;
int search(int a[],int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            return i;
            break;
        }
    }
    return -1;
}
int main(void)
{
	int num,k,n; 
	cin>>num;
	for(int i=0;i<num;i++)
	{
   		cin>>n;
   		int a[n];
		for(int i=0;i<n;i++)
    			cin>>a[i];
		cin>>k;
		int r=search(a,n,k);
		if(r==-1)   
    			cout<<"Not Present :"<<n;
		else
   			cout<<"Present : "<<r+1<<endl; 

	}
}