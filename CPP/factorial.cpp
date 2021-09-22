#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
        return 1;
    int factorial=n*fact(n-1);
    return factorial;
} 
int main()
{
    cout<<fact(5);
}