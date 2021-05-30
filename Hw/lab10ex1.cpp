/*
 * @Author: ShanKun
 * @Date: 2021-04-22 18:58:49
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-22 19:15:56
 * @FilePath: \C,C++\Hw\lab10ex1.cpp
 * @Description: 
 */
#include <iostream>
using namespace std;

class CandyBar{
    private:
        char name[30];
        double weight;
        int calories;
    
    public:
        void setCandyBar(void){
            cout<<"Enter brand name of a candy bar: ";
            cin.getline(this->name,30);
            cout<<"Enter weight of the candy bar: ";
            cin>>this->weight;
            cout<<"Enter calories(an integer value) in the candy bar: ";
            cin>>this->calories;
        }
        void showCandyBar(void){
            cout<<"Brand: "<<this->name<<endl;
            cout<<"Weight: "<<this->weight<<endl;
            cout<<"Calories: "<<this->calories<<endl;
        }
};

int main(){
    CandyBar candybar;
    candybar.setCandyBar();
    candybar.showCandyBar();

    system("pause");
    return 0;
}