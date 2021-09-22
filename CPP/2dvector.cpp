#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>vec(3,vector<int>(2,0));
    for(auto vctr:vec)
    {   
        for(auto i:vctr)
            cout<<i<<" ";
        cout<<endl;
    }
}