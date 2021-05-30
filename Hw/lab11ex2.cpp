/*
 * @Author: ShanKun
 * @Date: 2021-04-29 20:02:48
 * @LastEditors: ShanKun
 * @LastEditTime: 2021-04-29 20:23:30
 * @FilePath: \C,C++\Hw\lab11ex2.cpp
 * @Description: 
 */
#include <iostream>
using namespace std;

class Number{
    private:
        int n;
    public:
        Number(){
            this->n=0;
        }
        Number(int n ){
            this->n=n;
        }
        Number operator ++(int){
            int result= this->n;
            this->n=this->n + 1;
            return Number(result);
        }
        Number operator --(int){
            int result= this->n;
            this->n=this->n - 1;
            return Number(result);
        }
        friend std::ostream& operator<<(std::ostream& os, const Number& other);
        Number operator ++(){
            this->n=this->n + 1;
            int result= this->n;
            return Number(result);
        }
        Number operator --(){
            this->n=this->n - 1;
            int result= this->n;
            return Number(result);
        }
};

std::ostream& operator<<(std::ostream& os, const Number& other){
    os<<other.n;
    return os;  
}

int main(){
    Number n1(20);
    Number n2 = n1++;
    cout<<"n1 = "<<n1<<endl;
    cout<<"n2 = "<<n2<<endl;

    Number n3 = n2--;
    cout<<"n2 = "<<n2<<endl;
    cout<<"n3 = "<<n3<<endl;

    Number n4 = ++n3;
    cout<<"n3 = "<<n3<<endl;
    cout<<"n4 = "<<n4<<endl;

    Number n5 = --n4;
    cout<<"n4 = "<<n4<<endl;
    cout<<"n5 = "<<n5<<endl;

    system("pause");
    return 0;
}