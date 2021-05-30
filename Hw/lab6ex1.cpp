/*
 * @Author: ShanKun
 * @Date: 2021-03-25 18:44:57
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-03-25 19:43:30
 * @FilePath: \C,C++\Hw\Lab6ex1.cpp
 * @Description: 
 */
#include <iostream>
using namespace std;

void Displaymenu() {
    int eqarray[50];
    for(int x:eqarray)
        cout<<"=";
    cout<<"\n\t\tMENU\n";
    for(int x:eqarray)
        cout<<"=";
    cout<<"\n\t1.Add\n\t2.Subtract\n\t3.Multiply\n\t4.Divide\n\t5.Modulus"<<endl;
}

int Add(int a, int b){
    return a+b;
}

int Substract(int a, int b){
    return a-b;
}

int Multiply(int a, int b){
    return a*b;
}

int Divide(int a, int b){
    return a/b;
}

int Modulus(int a, int b){
    return a%b;
}

int main() {
    //show menu
    Displaymenu();
    int YourChoice;
    int a,b;
    char confirm;
    do{
        cout << "Enter your choice(1~5):";
        cin >> YourChoice;
        cout << "Enter your integer numbers:";
        cin >> a >>b;
        cout <<"\n";
        switch(YourChoice){
            case 1:
                cout<<"\nResult: "<<Add(a,b)<<endl;
                break;
            case 2:
                cout<<"\nResult: "<<Substract(a,b)<<endl;
                break;
            case 3:
                cout<<"\nResult: "<<Multiply(a,b)<<endl;
                break;
            case 4:
                cout<<"\nResult: "<<Divide(a,b)<<endl;
                break;
            case 5:
                cout<<"\nResult: "<<Modulus(a,b)<<endl;
                break;
        }
        cout << "Press y or Y to continue:";
        cin >> confirm;
    }while(confirm == 'y' || confirm == 'Y');

    system("pause");
    return 0;
}