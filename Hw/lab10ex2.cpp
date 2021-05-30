/*
 * @Author: ShanKun
 * @Date: 2021-04-22 19:17:07
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-22 19:45:26
 * @FilePath: \C,C++\Hw\lab10ex2.cpp
 * @Description: 
 */
#include <iostream>
using namespace std;

class Rectangle{
    private:
        double width;
        double height;
    public:
        Rectangle(){
            cout<<"Rectangle 1\n--------------"<<endl;
            width = 4;
            height = 40;
        }
        Rectangle(double width,double height){
            cout<<"Rectangle 2\n--------------"<<endl;
            this->width = width;
            this->height = height;
        }
        ~Rectangle(){
            cout<<"Object is being delected."<<endl;
        }
        
        void getArea(void){
            int area=static_cast<int>(this->height*this->width);
            cout<<"Area:       "<<area<<endl;
        }
        void getPerimeter(void){
            int per=static_cast<int>((this->height+this->width)*2);
            cout<<"Perimeter:  "<<per<<endl;
        }
        void display(void){
            cout<<"Width:      "<<this->width<<endl;
            cout<<"Height:     "<<this->height<<endl;
        }
};

int main(){
    Rectangle rectangle1;
    rectangle1.display();
    rectangle1.getArea();
    rectangle1.getPerimeter();

    Rectangle rectangle2(3.5,35.9);
    rectangle2.display();
    rectangle2.getArea();
    rectangle2.getPerimeter();

    system("pause");
    return 0;
}