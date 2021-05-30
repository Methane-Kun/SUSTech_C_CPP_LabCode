/*
 * @Author: ShanKun
 * @Date: 2021-04-07 23:07:03
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-07 23:20:18
 * @FilePath: \C,C++\Hw\lab7ex2.cpp
 * @Description: 
 */
#include <iostream>
using namespace std;

void max5(int[]);
void max5(double[]);

int main(){
    int iT[]={1,2,3,4,5};
    double dT[]={1.1,2.0,3.0,4.0,5.5};

    max5(iT);
    max5(dT);

    system("pause");
    return 0;
}

void max5(int T[]){
    int max=0;
    for(int i = 0;i<5;i++){
        if (T[i]>max){
            max=T[i];
        }
    }
    cout<<"Max int = "<<max<<endl;
}

void max5(double T[]){
    double max=0;
    for(int i = 0;i<5;i++){
        if (T[i]>max){
            max=T[i];
        }
    }
    cout<<"Max double = "<<max<<endl;
}