#include<iostream>
using namespace std;
void increasing(int n)
{
    if(n==0)
        return;
    increasing(n-1);
    cout<<n<<"  ";
}
int main()
{
    increasing(10);
}