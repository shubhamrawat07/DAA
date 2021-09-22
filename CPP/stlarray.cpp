#include<iostream>
#include<array>
#include<cstring>
using namespace std;
int main()
{
    array <int,5> arr={5,234,53,7,1};
    // arr.fill(2);
    for(auto i= arr.begin(); i!=arr.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i= arr.rbegin(); i!=arr.rend();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    string str={"Shubham"};
    for(auto c:str)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.front()<<endl;
    cout<<str.back()<<endl;

    // swap
    array<int,5>arr1={1,2,3,4,5};
    array<int,5>arr2={6,7,8,9,0};
    arr1.swap(arr2);
    for(auto i:arr1)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:arr2)
        cout<<i<<" ";
    cout<<endl;
    // string into array {data}
    const char* str1="Hello";
    array<char,5>chararr;
    memcpy(chararr.data(),str1,5);
    cout<<chararr.data()<<endl;
    return 0;
}