#include<iostream>
using namespace std;

class Employee{
    public:
    string Name;
    int Age;
    string Company;
    void Introduce(){
        cout<<"Name - "<<Name<<endl;
        cout<<"Age - "<<Age<<endl;
        cout<<"Company - "<<Company<<endl;
    }
    Employee(string name,string company, int age){
        Name = name;
        Company = company;
        Age = age;
        
    }

};
int main(){
    Employee employee1("Shubham","AMD",20);
    employee1.Introduce();
    Employee employee2("Sam","Intel",22);
    employee2.Introduce();



}
