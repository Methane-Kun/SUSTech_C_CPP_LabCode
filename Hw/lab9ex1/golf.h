/*
 * @Author: ShanKun
 * @Date: 2021-04-15 19:00:00
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-15 19:02:17
 * @FilePath: \C,C++\Hw\lab9ex1\golf.h
 * @Description: 
 */
//golf.h
const int Len = 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

void setgolf(golf& g, const char* name,int hc);

int setgolf(golf& g);

void handicap(golf& g,int hc);

void showgolf(const golf& g);