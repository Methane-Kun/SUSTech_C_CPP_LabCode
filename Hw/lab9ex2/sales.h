/*
 * @Author: ShanKun
 * @Date: 2021-04-19 21:57:26
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-19 22:03:01
 * @FilePath: \C,C++\Hw\lab9ex2\sales.h
 * @Description: 
 */
namespace SALES{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double averages;
        double max;
        double min;
    };

    void setSales(Sales& s,const double ar[],int n);

    void setSales(Sales& s);

    void showSales(const Sales& s);
    
}