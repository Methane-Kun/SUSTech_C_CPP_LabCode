//
// Created by ShanK on 2021/5/6.
//

#ifndef STOCK02_H
#define STOCK02_H
#include <string>
class Stock{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot(){total_val = shares * share_val;}

public:
    Stock();
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();

    void buy(long num, double  price);
    void sell(long num, double price);
    void update(double price);
    void show()const;
    const Stock & topval(const Stock & s)const;
};
#endif //STOCK02_H
