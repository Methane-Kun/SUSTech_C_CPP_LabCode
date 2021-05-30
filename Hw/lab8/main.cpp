/*
 * @Author: ShanKun
 * @Date: 2021-04-08 18:48:02
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-08 20:54:17
 * @FilePath: \C,C++\Hw\lab8\main.cpp
 * @Description: 
 */
#include <iostream>
#include "candybar.h"
using namespace std;

int main(){
    CandyBar candybar;
    set(&candybar);
    show(&candybar);
    set(candybar);
    show(candybar);

    return 0;
}


