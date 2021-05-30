/*
 * @Author: ShanKun
 * @Date: 2021-01-21 19:30:31
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-27 20:24:30
 * @FilePath: \C,C++\Hw\lab2ex1.cpp
 * @Description: 
 */
//lab2ex1.cpp
#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 5;
    cout<<"Result:"<<endl;
    cout<<"x value y value Expressions    Result"<<endl;
    cout<<"10 |    5       x=y+3          |x="<<y+3<<endl;
    cout<<"10 |    5       x=y-2          |x="<<y-2<<endl;
    cout<<"10 |    5       x=y*5          |x="<<y*5<<endl;
    cout<<"10 |    5       x=x/y          |x="<<x/y<<endl;
    cout<<"10 |    5       x=x%y          |x="<<x%y<<endl;
    system("pause");
    return 0;
}