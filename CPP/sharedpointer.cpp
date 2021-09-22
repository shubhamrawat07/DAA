#include<memory>
#include<iostream>
using namespace std;
class MyClass{
    public:
    MyClass(){
        cout<<"Constructor"<<endl;
    }
    ~MyClass(){
        cout<<"Destructor"<<endl;
    }
};
int main(){
    shared_ptr<MyClass>ptr1=make_shared<MyClass>();
    cout<<"Count : "<<ptr1.use_count()<<endl;
    shared_ptr<MyClass>ptr2=ptr1;
    cout<<"Count : "<<ptr1.use_count()<<endl;
    
}