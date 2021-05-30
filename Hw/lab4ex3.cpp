//lab4ex3.cpp
#include <iostream>
using namespace std;

int main(){
    int *p = NULL;
    p = new int[5];

    cout<<"Enter 5 integers: "<<endl;

    for(int i=0;i<5;i++,p++){
        cin>>*p;
    }
    p--;
    cout<<"The elements of the array in reverse order are: "<<endl;

    for(int i=0;i<5;i++,p--){
        cout<<*p<<" ";
    }

    delete []p;

    return 0;

}