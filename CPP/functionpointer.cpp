#include<iostream>
using namespace std;

int minNum(int arr[],int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(min>arr[i])
        min=arr[i];
    }
    return min;
}
int maxNum(int arr[],int size){
    int max=arr[0];
    for(int i=1;i<size;i++){
        if(max<arr[i])
        max=arr[i];
    }
    return max;
}
void getMinAndMax(int arr[],int size,int* min ,int* max){
    for(int i=1;i<size;i++){
        if(arr[i]>*max)
        *max=arr[i];
    }
    for(int i=1;i<size;i++){
        if(arr[i]<*min)
        *min=arr[i];
    }
}
int main(){
    int arr[5]={14,-3,25,65,7};
    //cout<<"Miminum number is :"<<minNum(arr,5)<<endl;
    //cout<<"Maximum number is :"<<maxNum(arr,5)<<endl;
    int min=arr[0];
    int max=arr[0];
    getMinAndMax(arr,5,&min,&max);
    cout<<"Minimum number is :"<<min<<endl;
    cout<<"maximum number is :"<<max<<endl;
}