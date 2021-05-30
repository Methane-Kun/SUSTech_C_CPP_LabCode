/*
 * @Author: ShanKun
 * @Date: 2021-04-19 21:59:31
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-21 16:23:28
 * @FilePath: \C,C++\Hw\lab9ex2\sales.cpp
 * @Description: 
 */
#include <iostream>
#include <array>
#include "sales.h"
using namespace std;

void SALES::setSales(Sales& s,const double ar[],int n){
    cout<<"Non-interactive version of setSales() to provide values:"<<endl;
    double avg,max,min=0;
    for(int i=0;i<n;i++){
        avg+=(ar[i]/n);
        if(ar[i]>max)
            max=ar[i];
        if(ar[i]<min||i==0)
            min=ar[i];
    }
    for(int i =0;i<n;i++){
        s.sales[i]=ar[i];
    }
    s.averages=avg;
    s.max=max;
    s.min=min;
}

void SALES::setSales(Sales& s){
    cout<<"Interactive version of setSales() to provide values:"<<endl;
    cout<<"Enter sales for 4 quarters: ";
    double avg,max,min=0;
    for(int i=0;i<4;i++){
        cin>>s.sales[i];
        avg+=(s.sales[i]/4);
        if(s.sales[i]>max)
            max=s.sales[i];
        if(s.sales[i]<min||i==0)
            min=s.sales[i];
    }
    s.averages=avg;
    s.max=max;
    s.min=min;
}

void SALES::showSales(const Sales& s){
    cout<<"Sales:";
    for(double v:s.sales){
        cout<<v<<'\t';
    }
    cout<<"\nAverage:"<<s.averages<<endl;
    cout<<"Max:"<<s.max<<endl;
    cout<<"Min:"<<s.min<<endl;
}