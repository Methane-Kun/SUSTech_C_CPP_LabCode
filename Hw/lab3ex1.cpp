//lab3ex1.cpp
#include <iostream>
using namespace std;

struct person{
    char fname[20];
    char lname[20];
    char grade[4];
    int age;
};

int main(){
    person a;

    cout<<"what is your first name? ";
    cin.getline(a.fname,20);
    cout<<"what is your last name? ";
    cin.getline(a.lname,20);
    cout<<"what letter grade do you deserve? ";
    cin.getline(a.grade,4);
    cout<<"what is your age? ";
    cin>>a.age;

    cout<<"The information you entered is:"<<endl;
    printf("Name:%s, %s\nGrade:%s\nAge:%d",a.fname,a.lname,a.grade,a.age);

    return 0;
}