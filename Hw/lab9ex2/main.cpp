/*
 * @Author: ShanKun
 * @Date: 2021-04-19 21:59:08
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-21 16:14:07
 * @FilePath: \C,C++\Hw\lab9ex2\main.cpp
 * @Description: 
 */
#include <iostream>
#include "sales.h"
using namespace std;

int main(){
    SALES::Sales s;
    double ar[]={345.2,621.8,1073.5};
    SALES::setSales(s,ar,sizeof(ar)/sizeof(ar[0]));
    SALES::showSales(s);

    SALES::Sales ss;
    SALES::setSales(ss);
    SALES::showSales(ss);

    return 0;
}