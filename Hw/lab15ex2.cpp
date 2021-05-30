/*
 * @Author: ShanKun
 * @Date: 2021-05-27 21:17:44
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-05-27 21:19:08
 * @FilePath: \Hw\lab15ex2.cpp
 * @Description: 
 */
#include <iostream>
#include "windows.h"

class RangeError {
public:
    int iVal;
    int seq;

    RangeError(int _iVal, int _seq) {
        iVal = _iVal;
        seq = _seq;
    }
};

float proc(int i, int seq) {
    if (i < 0 || i > 100)
        throw RangeError(i, seq);
    return (float) i / 4;
}

int main() {
    while (true) {
        std::cout << "Please enter marks for 4 courses: ";
        using std::cin;
        int a[4];
        for (int i = 0; i < 4; i++) {
            cin >> a[i];
        }

        float avg;

        try {
            avg = proc(a[0], 1) + proc(a[1], 2) + proc(a[2], 3) + proc(a[3], 4);
            std::cout << "The average of the four courses is " << avg;
        } catch (RangeError &re) {
            std::cerr << "The Parameter " << re.seq << " is " << re.iVal << " which out of range(0-100).";
            Sleep(1000);
        }
        std::cout << "\nWould you want to enter another marks for 4 courses(y/n)?";
        char s;
        cin >> s;
        if (s == 'y')
            continue;
        else
            std::cout << "Bye, see you next time." << std::endl;
        break;
    }

    return 0;
}
