//lab4ex2.cpp
#include <iostream>
using namespace std;

struct CandyBar
{
    char name[20];
    double weight;
    int cal;
    double ratio;
};

int main(){
    CandyBar *p=NULL;
    p = new CandyBar[3];

    cout<<"Please input three CandyBar's information:"<<endl;

    for(int i=0;i<3;i++,p++){
        cout<<"Enter the brand name of Candy bar: ";
        cin.getline((*p).name,20);
        cout<<"Enter weight: ";
        cin>>p->weight;
        cin.get();
        cout<<"Enter the calories: ";
        cin>>(*p).cal;
        cin.get();
        p->ratio=(*p).cal/p->weight;
    }

    p-=3;

    cout<<"\nDisplaying the CandyBar array contents"<<endl;

    for(int i=0;i<3;i++,p++){
        cout<<"Brand name: "<<(*p).name<<endl;
        cout<<"Weight: "<<p->weight<<endl;
        cout<<"Calories: "<<(*p).cal<<endl;
    }

    delete [] p;

    return 0;

}