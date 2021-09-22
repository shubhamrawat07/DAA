#include<iostream>
using namespace std;

class Instrument{
public:
    virtual void Sound()=0;
};

class Guitar:public Instrument{
public:
    void Sound(){
        cout<<"Guitar is playing...\n";
    }
};

class Piano:public Instrument{
public:
    void Sound(){
        cout<<"Piono is playing...\n";
    }
};

int main(){
    Instrument* i1=new Guitar;
    i1->Sound();
    Instrument* i2=new Piano;
    i2->Sound();
    Instrument* instrument[2]={i1,i2};
    for(int i=0;i<2;i++)
        instrument[i]->Sound();
}