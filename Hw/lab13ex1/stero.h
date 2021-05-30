//
// Created by ShanK on 2021/5/13.
//

#ifndef LAB13EX1_STERO_H
#define LAB13EX1_STERO_H

#include <iostream>

class CStereoShape {
private:
    static int numberOfObject;
public:
    CStereoShape() { numberOfObject++; };

    virtual double GetArea();

    virtual double GetVolume();

    virtual void Show() const;

    static int GetNumOfObject() { return numberOfObject; };

};

class CCube : public CStereoShape {
private:
    double length;
    double width;
    double heigh;
public:
    CCube();

    CCube(const double &l, const double &w, const double &h);

    CCube(const CCube &);

    virtual double GetArea() const;

    virtual double GetVolume() const;

    virtual void Show() const;
};

class CSphere : public CStereoShape {
private:
    double radius;
public:
    CSphere();

    CSphere(const double &r);

    virtual double GetArea() const;

    virtual double GetVolume() const;

    virtual void Show() const;
};

#endif //LAB13EX1_STERO_H
