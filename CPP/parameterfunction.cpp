#include<iostream>
using namespace std;
int add(int x , int y){
    return x+y;
}
int main(){
    int(*funcPtr)(int,int)=add;
    cout<<add(2,3)<<endl;
    cout<<funcPtr(5,2)<<endl;

}