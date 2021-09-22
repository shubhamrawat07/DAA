#include<iostream>
using namespace std;

int getNumber(){
    return 20;
}
int main(){
    int(*funcPtr)()=getNumber;
    cout<<funcPtr();
}