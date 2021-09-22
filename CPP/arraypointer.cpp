#include<iostream>
using namespace std;

int main(){
    /*int numbers[5]={1,2,3,4,5};
    cout<<numbers<<endl;
    cout<<&numbers<<endl;
    cout<<numbers[2]<<endl;
    cout<<*(numbers+2)<<endl;*/
    int n[5];
    for(int i=0;i<5;i++){
        cout<<"Enter number : ";
        cin>>n[i];
    }
    for(int i=0;i<5;i++){
        cout<<*(n+i)<<" ";
    }

}