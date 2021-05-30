/*
 * @Author: ShanKun
 * @Date: 2021-04-29 18:24:05
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-29 20:03:29
 * @FilePath: \C,C++\Hw\lab11ex1.cpp
 * @Description: 
 */
#include <iostream>
using namespace std;

class Complex{
    private:
        double re;
        double im;
    public:
        Complex(){
            this->re=0.0;
            this->im=0.0;
        }
        Complex(double re,double im){
            this->re=re;
            this->im=im;
        }
        friend std::ostream& operator<<(std::ostream& os, const Complex& other);
        friend void operator>>(std::istream& is, Complex& other);
        Complex operator~()const{
            double result_im=this->im*(-1);
            return Complex(this->re,result_im);
        }
        Complex operator+(const Complex& other)const{
            double result_re=this->re+other.re;
            double result_im=this->im+other.im;
            return Complex(result_re,result_im);
        }
        Complex operator-(const Complex& other)const{
            double result_re=this->re-other.re;
            double result_im=this->im-other.im;
            return Complex(result_re,result_im);
        }
        Complex operator-(double real)const{
            double result_re=this->re-real;
            double result_im=this->im;
            return Complex(result_re,result_im);
        }
        Complex operator*(const Complex& other)const{
            double result_re=this->re*other.re-this->im*other.im;
            double result_im=this->im*other.re+this->re*other.im;
            return Complex(result_re,result_im);
        }
        friend Complex operator*(int real,const Complex& other);
        friend string operator==(const Complex& a, const Complex& b);
        friend string operator!=(const Complex& a, const Complex& b);
};
std::ostream& operator<<(std::ostream& os, const Complex& other){
    if(other.im>=0){
        os<<other.re<<" + "<<other.im<<"i";
    }else{
        double result_im=-1*other.im;
        os<<other.re<<" - "<<result_im<<"i";
    }
    return os;  
}
void operator>>(std::istream& is, Complex& other){
    std::cout<<"real:";
    is>>other.re;
    std::cout<<"imaginary:";
    is>>other.im;
}
Complex operator*(int real,const Complex& other){
    double result_re=other.re*real;
    double result_im=other.im;
    return Complex(result_re,result_im);
}
string operator==(const Complex& a, const Complex& b){
    bool result = (a.re==b.re)&(a.im==b.im);
    if(result==1)
        return "true";
    else
        return "false";
}
string operator!=(const Complex& a, const Complex& b){
    bool result = (a.re!=b.re)|(a.im!=b.im);
    if(result==1)
        return "true";
    else
        return "false";
}

int main(){
    Complex a(3.0,4.0);
    Complex b(2.0,6.0);

    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
    cout<<"~b is "<<~b<<endl;
    cout<<"a + b is "<<a + b<<endl;
    cout<<"a - b is "<<a - b<<endl;
    cout<<"a - 2 is "<<a - 2<<endl;
    cout<<"a * b is "<<a * b<<endl;
    cout<<"2 * a is "<<2 * a<<endl;

    Complex c = b;
    cout<<"b == c is "<<(b == c)<<endl;
    cout<<"b != c is "<<(b != c)<<endl;
    cout<<"a == c is "<<(a == c)<<endl<<endl;

    Complex d;
    cout<<"Enter a complex number: "<<endl;
    cin>>d;
    cout<<"d is "<<d<<endl;

    system("pause");
    return 0;
}