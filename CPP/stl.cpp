#include<iostream>
using namespace std;
struct info{
    string name;
    int age;
    float weight;
    char c;
    
    info(string name_,int age_,float weight_,int c_)
    {
        name=name_;
        age=age_;
        c=c_;
        weight=weight_;
    }

};
int main()
{
    info *shubham=new info("Shubham",20,91.5,'R');
    cout<<shubham->age<<endl;
    cout<<shubham->c<<endl;
    cout<<shubham->name<<endl;
    cout<<shubham->weight;
}