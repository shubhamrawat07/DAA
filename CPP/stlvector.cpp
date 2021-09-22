#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>vec;

    vector<int>v1;
    v1.push_back(10);
    v1.push_back(20);

    vector<int>v2;
    v2.push_back(11);
    v2.push_back(12);

    vector<int>v3;
    v3.push_back(63);
    v3.push_back(35);
    v3.push_back(52);

    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);
    for(auto vctr:vec)
    {
        for(auto i:vctr)
            cout<<i<<" ";
        cout<<endl;
    }
}