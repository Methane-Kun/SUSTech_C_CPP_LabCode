/*
 * @Author: ShanKun
 * @Date: 2021-03-25 20:07:27
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-03-25 20:46:10
 * @FilePath: \C,C++\Hw\lab6ex3.cpp
 * @Description: lab6ex3
 */
#include <iostream>
using namespace std;

void Fill_array(double arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Enter value #"<<i+1<<": ";
        cin>>arr[i];
    }
}

void Show_array(double *arr,int size){
    for(int i=0;i<size;i++)
        cout<<*(arr+i)<<" ";
    cout<<endl;
}

void Reverse_array(double *arr,int size){
    int temp=0;
    for(int i=0;i<size/2;i++){
        temp=arr[size-i-1];
        arr[size-i-1]=arr[i];
        arr[i]=temp;
    }
}

void Reverse_innerarray(double *arr,int size){
    int temp=0;
    int n=size-2;
    for(int i=0;i<n/2;i++){
        temp=arr[size-i-2];
        arr[size-i-2]=arr[i+1];
        arr[i+1]=temp;
    }
}

int main(){
    int size;
    cout<<"Enter the size of an Array: ";
    cin>>size;
    double arr[size];
    Fill_array(arr,size);
    Show_array(arr,size);

    Reverse_array(arr,size);
    Show_array(arr,size);
    
    Reverse_innerarray(arr,size);
    Show_array(arr,size);

    system("pause");
    return 0;
}