#include<iostream>
using namespace std;
class Employee{
    private:
    string Name;
    string Company;
    int Age;
    public:
    void setName(string name){
        Name=name;
    }
    string getName(){
        return Name;
    }

    void setCompany(string company){
        Company=company;
    }
    string getCompany(){
        return Company;
    }

    void setAge(int age){
        Age=age;
    }
    int getAge(){
        return Age;
    }
    
    void Bio(){
        cout<<"Name - "<<Name<<endl;
        cout<<"Age - "<<Age<<endl;
        cout<<"Comany - "<<Company<<endl;
    }
    
    Employee(string name,string company,int age){
        Name=name;
        Age=age;
        Company=company;
    }
};
int main(){
    Employee employee1("Shubham","AMD",20);
    employee1.Bio();
    Employee employee2("Sam","Intel",21);
    employee2.Bio();
    employee1.setAge(21);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old."<<endl;
    employee1.setName("Shubham Rawat");
    cout<<"Correction "<<employee1.getName()<<endl;

}   