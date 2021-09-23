#include<iostream>
#include<fstream>
#include<algorithm>
using namespace std;
ofstream out;
void sumPair(int arr[],int n,int key)
{
	out.open("output.txt");
	int left=0;
	int right=n-1;
	int flag=0;
	while(left<right)
	{
		if(arr[left]+arr[right]==key)
		{
			out << arr[left] << " " << arr[right] << ", ";
			right--;
			flag++;
		}
		else if(arr[left]+arr[right]>key)
			right--;
		else if(arr[left]+arr[right]<key)
			left++;
	}
	if(flag==0)
		out << "No Such Pair Exist\n";
	else
		out << endl;
}
int main()
{
	ifstream in;
	in.open("input.txt");
	ofstream out;
	out.open("output.txt");
	int t,n;
	in >> t;
	while(t--)
	{
		in >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			in >> arr[i];
		int k;
		in >> k;
		sort(arr,arr+n);
	 	sumPair(arr,n,k);	
	}
}