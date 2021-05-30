/*
 * @Author: ShanKun
 * @Date: 2021-03-25 19:44:52
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-03-25 20:09:04
 * @FilePath: \C,C++\Hw\lab6ex2.cpp
 * @Description: lab2ex2
 */
#include <iostream>
using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void Display(box a){
    cout<<"Maker: "<<a.maker<<endl;
    cout<<"Height: "<<a.height<<endl;
    cout<<"Width: "<<a.width<<endl;
    cout<<"Length: "<<a.length<<endl;
    cout<<"Volume: "<<a.volume<<endl;
}

void PassbyValue(box a){
    struct box x=a;
    x.volume=85.68;
    Display(x);
}

void PassbyAdd(box &a){
    struct box y=a;
    y.volume=85.68;
    Display(y);
}


int main(){
    struct box ini={"Jack Smith",3.4,4.5,5.6,0};
    cout<<"Before setting volume:"<<endl;
    Display(ini);

    cout<<"\nAfter setting volume as value pass"<<endl;
    PassbyValue(ini);

    cout<<"\nAfter setting volume as value address"<<endl;
    PassbyAdd(ini);

    system("pause");
    return 0;
}

