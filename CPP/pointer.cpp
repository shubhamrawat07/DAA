#include<iostream>
using namespace std;

int main(){
    float n=5.2;
    cout<<n<<endl;
    cout<<&n<<endl;
    float *p=&n;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    *p=10;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<n<<endl;
    cout<<&n<<endl;
}