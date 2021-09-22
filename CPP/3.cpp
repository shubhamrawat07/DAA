#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion()=0;   

};

class Employee:AbstractEmployee{
    private:
    string Company;
    int Age;

    protected:
    
    string Name;

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
        cout<<"Company - "<<Company<<endl;
        cout<<"Age - "<<Age<<endl;
    }

    Employee(string name,string company,int age ){
        Name=name;
        Company=company;
        Age=age;
    }

    void AskForPromotion(){
        if(Age>30)
        cout<<Name<<" Got Promoted "<<endl;
        else
        cout<<Name<<" No Promotion "<<endl;
    }
    virtual void Work(){
        cout<<Name<<" is playing games."<<endl;
    }
};

class Developer:public Employee{
    public:
    string FavLang;
    Developer(string name,string company,int age,string favLang)
        :Employee(name,company,age)
    {
        FavLang=favLang;
    }
    void Bug()
    {
        cout<<Name<<" favourite langaue is "<<FavLang<<endl;
    }
    void Work(){
        cout<<Name<<" is coding using "<<FavLang<<" language"<<endl;
    }
};

class Teacher:public Employee{
    public:
    string Subject;
    void Lesson(){
        cout<<Name<<" is preparing for "<<Subject<<" ."<<endl;
    }
    Teacher(string name,string company,int age,string subject)
        :   Employee(name,company,age)   
    {
        Subject=subject;
    }
    void Work(){
        cout<<Name<<" is teaching "<<Subject<<" subject."<<endl;
    }
};

int main(){
    Developer d= Developer("Shubham","AMD",20,"C++.");
    Teacher t= Teacher("Jai","High School",32,"Physics");
    Employee* e1=&d;
    Employee* e2=&t;

    e1->Work();
    e2->Work();
}