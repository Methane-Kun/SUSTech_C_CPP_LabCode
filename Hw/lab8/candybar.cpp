/*
 * @Author: ShanKun
 * @Date: 2021-04-08 19:43:11
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-08 20:51:33
 * @FilePath: \C,C++\Hw\lab8\candybar.cpp
 * @Description: 
 */
#include <iostream>
#include "candybar.h"
using namespace std;

void set(CandyBar & cb){
    cout<<"Call the set function of Passing by reference:"<<endl;
    cout<<"Enter brand name of a Candy bar: ";
    cin.getline(cb.brand,30);
    cout<<"Enter weight of the Candy bar: ";
    cin>>cb.weight;
    cout<<"Enter calories (an integer value) in the Candy bar: ";
    cin>>cb.calorie;
    cout<<endl;
    cin.ignore(1024,'\n');
}

void set(CandyBar* const cb){
    cout<<"Call the set function of Passing by pointer:"<<endl;
    cout<<"Enter brand name of a Candy bar: ";
    cin.getline(cb->brand,30);
    cout<<"Enter weight of the Candy bar: ";
    cin>>cb->weight;
    cout<<"Enter calories (an integer value) in the Candy bar: ";
    cin>>cb->calorie;
    cout<<endl;
    cin.ignore(1024,'\n');
}

void show(const CandyBar & cb){
    cout<<"Call the show function of Passing by reference:"<<endl;
    cout<<"Brand: "<<cb.brand<<endl;
    cout<<"Weight: "<<cb.weight<<endl;
    cout<<"Calories: "<<cb.calorie<<endl;
    cout<<endl;
}

void show(const CandyBar* cb){
    cout<<"Call the show function of Passing by pointer:"<<endl;
    cout<<"Brand: "<<cb->brand<<endl;
    cout<<"Weight: "<<cb->weight<<endl;
    cout<<"Calories: "<<cb->calorie<<endl;
    cout<<endl;
}