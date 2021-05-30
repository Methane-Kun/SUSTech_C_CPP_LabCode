/*
 * @Author: ShanKun
 * @Date: 2021-04-08 19:34:14
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-08 19:39:05
 * @FilePath: \C,C++\Hw\lab8\candybar.h
 * @Description: 
 */

#ifndef EXC_CANDYBAR_H
#define EXE_CANDYBAR_H
#include <iostream>

const int LEN = 30;
struct CandyBar{
    char brand[LEN];
    double weight;
    int calorie;
};

void set(CandyBar & cb);
void set(CandyBar* const cb);
void show(const CandyBar & cb);
void show(const CandyBar* cb);

#endif