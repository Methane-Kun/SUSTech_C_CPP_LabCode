//lab5ex1.cpp
#include <iostream>
using namespace std;

int main(){
    int a=0;
    int b=1;
    while(b!=0){
        cout<<"Enter an Integer number:";
        cin>>b;
        a+=b;
        cout<<"The cumulative sum of the entires to date is :"<<a<<endl;
    }
    return 0;
}
