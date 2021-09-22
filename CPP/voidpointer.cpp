#include<iostream>
using namespace std;
void printNumber(int* numberPtr){
    cout<<*numberPtr<<endl;
}
void printChar(char* charPtr){
    cout<<*charPtr<<endl;
}
void print(void* ptr,char type){
    switch(type){
        case 'i':cout<<(*(int*)ptr)<<endl; break;
        case 'c':cout<<(*(char*)ptr)<<endl; break;
    }
}
 int main(){
     int num=5;
     char letter='S';
     printNumber(&num);
     printChar(&letter);
     print(&num,'i');
     print(&letter,'c');

 }