/*
 * @Author: ShanKun
 * @Date: 2021-04-15 18:52:00
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-29 20:05:12
 * @FilePath: \C,C++\Hw\lab9ex1\main.cpp
 * @Description: 
 */
#include <iostream>
#include "golf.h"
using namespace std;

int main(){
    cout<<"First version of setgolf function: "<<endl;
    golf ann;
    setgolf(ann,"Ann Birdfree",24);
    showgolf(ann);

    cout<<"Second version of setgolf function: "<<endl;
    golf andy;
    int i = 0;
    while (i==0){
        i = setgolf(andy);
    }
    showgolf(andy);

    return 0;
}