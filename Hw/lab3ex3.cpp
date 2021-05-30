/*
 * @Author: ShanKun
 * @Date: 2021-03-04 19:40:04
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-08 19:51:09
 * @FilePath: \C,C++\Hw\lab3ex3.cpp
 * @Description: 
 */
//lab3ex3.cpp
#include <iostream>
using namespace std;

struct CandyBar{
    char name[20];
    float weight;
    int n;
    float p;
};

int main(){
    CandyBar a[3];

    cout<<"Please input three CandyBar's information:"<<endl;

    for(int i=0;i<3;i++){
        cout<<"Enter brand name of a Candy bar: ";
        cin.getline(a[i].name,20);
        cout<<"Enter weight of he Candy bar: ";
        cin>>a[i].weight;
        cin.ignore(1024,"\n");
        cout<<"Enter calories (an integer value) in the Candy bar: ";
        cin>>a[i].n;
        cin.ignore(1024,"\n");
        a[i].p=a[i].n/a[i].weight;
    }

    cout<<"\nDisplaying the CandyBar array contents"<<endl;

    for(int i=0;i<3;i++){
        cout<<"Brand: "<<a[i].name<<endl;
        cout<<"Weight: "<<a[i].weight<<endl;
        cout<<"Calories: "<<a[i].n<<endl;
    }

    cout<<"\nThe greatest calories per weight is:"<<endl;
    int b=0;
    for(int i=0;i<2;i++){
        if(a[b].p<a[i].p)
            b=i;
    }
    cout<<"Brand name: "<<a[b].name<<endl;
    cout<<"Calories pre weight: "<<a[b].p<<endl;

    return 0;
}