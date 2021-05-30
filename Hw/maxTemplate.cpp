/*
 * @Author: ShanKun
 * @Date: 2021-05-20 18:02:17
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-05-20 18:05:44
 * @FilePath: \Hw\maxTemplate.cpp
 * @Description: 
 */
#include <iostream>
using namespace std;

int Max(int one, int two);

int main(){
    int i_one = 3, i_two = 5;

    cout<<"The max of "<<i_one<<" and "<<i_two<<" is "
        <<Max(i_one, i_two)<<endl;
    
    system("pause");
    return 0;
}

int Max(int one, int two){
    int biggest;
    if(one<two)
        biggest = two;
    else
        biggest = one;

    return biggest;
}