/*
 * @Author: ShanKun
 * @Date: 2021-04-15 19:03:27
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-19 13:39:53
 * @FilePath: \C,C++\Hw\lab9ex1\golf.cpp
 * @Description: 
 */
#include <iostream>
#include <cstring>
#include "golf.h"
using namespace std;

void setgolf(golf& g, const char* name, int hc){
    strcpy(g.fullname,name);
    g.handicap=hc;
}

int setgolf(golf& g){
    cout<<"Enter the fullname: ";
    cin.getline(g.fullname,30);
    cout<<"Enter the handicap: ";
    cin>>g.handicap;
    cin.get();
    int n=strlen(g.fullname);
    if (n==0){
        return 0;
    }else{
        return 1;
    }
}

void handicap(golf& g,int hc){
    g.handicap=hc;
}

void showgolf(const golf& g){
    cout<<"The name of golf is "<<g.fullname<<" and its handicap is "<<g.handicap<<endl;
}