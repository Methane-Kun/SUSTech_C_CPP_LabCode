//
// Created by ShanK on 2021/5/13.
//
#include <iostream>
#include "stero.h"

using namespace std;

int CStereoShape::numberOfObject = 0;

double CStereoShape::GetArea() {
    cout << "CStereoShape::GetArea()" << endl;
    return 0.0;
}

double CStereoShape::GetVolume() {
    cout << "CStereoShape::GetVolume()" << endl;
    return 0.0;
}

void CStereoShape::Show() const {
    cout << "CStereoShape::Show()" << endl;
}

CCube::CCube() {
    length = 0;
    width = 0;
    heigh = 0;
}

CCube::CCube(const double &l, const double &w, const double &h) {
    length = l;
    width = w;
    heigh = h;
}

CCube::CCube(const CCube &c) {
    length = c.length;
    width = c.width;
    heigh = c.heigh;
}

double CCube::GetArea() const {
    return length * width * 2 + length * heigh * 2 + width * heigh * 2;
}

double CCube::GetVolume() const {
    return length * width * heigh;
}

void CCube::Show() const {
    cout << "Cube length :" << length << "\twidth :" << width << "\thight :" << heigh << endl;
    cout << "Cube area :" << GetArea() << "\tVolume :" << GetVolume() << endl;
}

CSphere::CSphere() {
    radius = 0;
}

CSphere::CSphere(const double &r) {
    radius = r;
}

double CSphere::GetArea() const {
    return 4 * 3.14 * radius * radius;
}

double CSphere::GetVolume() const {
    return radius * radius * radius * 3.14 * 4 / 3;
}

void CSphere::Show() const {
    cout << "Sphere radius :" << radius << "\tarea :" << GetArea() << "\tvolume :" << GetVolume() << endl;
}