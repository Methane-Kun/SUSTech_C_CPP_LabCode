/*
 * @Author: ShanKun
 * @Date: 2021-05-20 18:08:10
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-05-20 18:13:27
 * @FilePath: \C,C++\Hw\lab14ex1.cpp
 * @Description: 
 */
#include <iostream>
using namespace std;

int Max(int one, int two);
double Max(double one, double two);
string Max(string one, string two);

int main(){
    int i_one = 5, i_two = 3;
    double d_one = 3.5, d_two = 10.3;
    string s_one = "Hello", s_two = "World";

    cout<<"The max of two integers "<<i_one<<" and "<<i_two<<" is "
        <<Max(i_one, i_two)<<endl;
    
    cout<<"The max of two doubles "<<d_one<<" and "<<d_two<<" is "
        <<Max(d_one, d_two)<<endl;
    
    cout<<"The max of two strings "<<s_one<<" and "<<s_two<<" is "
        <<Max(s_one, s_two)<<endl;
    
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

double Max(double one, double two){
    double biggest;
    if(one<two)
        biggest = two;
    else
        biggest = one;

    return biggest;
}

string Max(string one, string two){
    string biggest;
    if(one<two)
        biggest = two;
    else
        biggest = one;

    return biggest;
}