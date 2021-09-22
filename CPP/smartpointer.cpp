#include<iostream>
#include<memory>
using namespace std;

class MyClass{
    public:
    MyClass(){
        cout<<"COnstruted \n";
    }
    ~MyClass(){
        cout<<"Destructed \n";
    }
};

int main(){
    unique_ptr<int>ptr1=make_unique<int>(10);
    unique_ptr<int>ptr2=move(ptr1);
    cout<<*ptr2<<endl;
    cout<<*ptr2<<endl;
    unique_ptr<MyClass>unPtr1=make_unique<MyClass>();
    
}