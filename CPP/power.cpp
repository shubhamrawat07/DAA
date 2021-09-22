#include<iostream>
using namespace std;
int pow(int x, int y)
{
    if(y==1)
        return x;
    int ans=x*pow(x,y-1);
    return ans;
}
int main()
{
    cout<<pow(2,3);
}