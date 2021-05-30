//lab3ex2.cpp
#include <iostream>
using namespace std;

struct CandyBar{
    char name[20];
    float weight;
    int n;
};

int main(){
    CandyBar a;

    cout<<"Enter brand name of a Candy bar: ";
    cin.getline(a.name,20);
    cout<<"Enter weight of he Candy bar: ";
    cin>>a.weight;
    cout<<"Enter calories (an integer value) in the Candy bar: ";
    cin>>a.n;

    cout<<"Brand: "<<a.name<<endl;
    cout<<"Weight: "<<a.weight<<endl;
    cout<<"Calories: "<<a.n<<endl;

    return 0;
}