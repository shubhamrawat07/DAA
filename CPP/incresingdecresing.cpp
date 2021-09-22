#include<iostream>
using namespace std;
void id(int n)
{
    if(n==0)
        return;
    cout<<n<<"  ";
    id(n-1);
    cout<<n<<"  ";
}
int main()
{
    id(10);
}