#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<vector<int>>> vec(2,vector<vector<int>>(3,vector<int>(4,0)));
    for(auto t:vec)
    {
        for(auto vctr:t)
        {
            for(auto i:vctr)
                cout<<i<<" ";
            cout<<endl;
        }
    }
}