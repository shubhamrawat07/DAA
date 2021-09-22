#include <iostream>
using namespace std; 
void heapify(int arr[], int n, int i) 
{
    int max = i; 
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;
    if (leftChild < n && arr[leftChild] > arr[max])
      max = leftChild;
    if (rightChild < n && arr[rightChild] > arr[max])
      max = rightChild;
    if (max != i) 
    {
      swap(arr[i], arr[max]);
      heapify(arr, n, max); 
    }
}
void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]); 
  
      heapify(arr, i, 0); 
    }
  }
void display(int arr[], int n)
{
      	int c;
   	for (int i = 0; i < n; ++i)
     	{
         	c=0;
          	if(arr[i]==arr[i+1]  )
         	{
              		cout<<"YES";
              		c++;
             		break;  
          	}
      	}
      	if(c==0)
          	cout<<"NO";   
  }
int main() 
{
	int m,i;
    	cin>>m;
    	for(i=0;i<m;i++)
    	{
        	int n;
        	cin>>n;
       		int arr[n];
    		for(i=0;i<n;i++)
        		cin>>arr[i];
    		heapSort(arr, n);
    		display(arr, n);
  	}
}