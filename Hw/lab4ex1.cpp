//lab4ex1.cpp
#include <iostream>
using namespace std;

struct Pizza
{
    char company[20];
    double diameter;
    double weight;
};

int main(){
    Pizza *p=new Pizza;

    cout<<"Enter the name of pizza company: ";
    cin.getline(p->company,20);
    cout<<"Enter the diameter of pizza (inches): ";
    cin>>p->diameter;
    cout<<"Enter the weight of the pizza (g): ";
    cin>>(*p).weight;

    cout<<"Display the information of the pizza\nCompanyname: "<<p->company<<"\nPizza diameter: "<<p->diameter<<" inches\nPizza weight: "<<p->weight<<" g"<<endl;

    return 0;
}