#include<iostream>
using namespace std;
void tower(int n, char from, char to,char aux)
{
    if(n==0)
        return;
    tower(n-1,from,aux,to);
    cout<<from" -> "to<<endl;
    tower(n-1,aux,to,from);
}
int main(){
    tower(3,'A','C','B');
}