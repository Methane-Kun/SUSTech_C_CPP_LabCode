/*
 * @Author: ShanKun
 * @Date: 2021-04-01 19:27:09
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-08 19:26:16
 * @FilePath: \C,C++\Hw\lab7ex1.cpp
 * @Description: 
 */
#include <iostream>
#include <cstring>

struct stringy{
    char * str;
    int ct;
};

void set(stringy&,char*);
void show(stringy&);
void show(stringy&,int);
void show(char*,int);
void show(char*);

int main(){
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany,testing);

    show(beany);
    show(beany,2);

    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Done!");

    system("pause");
    return 0;
}

void set(stringy& beany,char* testing){
    beany.str=testing;
    beany.ct=strlen(testing);
}

void show(stringy& beany){
    std::cout<<beany.str<<std::endl;
}

void show(stringy& beany, int n){
    for(int i=0;i<n;i++){
        std::cout<<beany.str<<std::endl;
    }
}

void show(char* testing, int n){
    for(int i=0;i<n;i++){
        std::cout<<testing<<std::endl;
    }
}

void show(char* str){
    std::cout<<str<<std::endl;
}
