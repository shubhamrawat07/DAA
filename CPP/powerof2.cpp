#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=9;
    if((n&n-1)==0)
         cout<<"exist";
    else 
        cout<<"doesnt exist";
}