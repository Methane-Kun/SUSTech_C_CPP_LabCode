//lab2ex2.cpp
#include <iostream>
using namespace std;

int main(){
    long long t,d,h,m,s;
    cout<<"Enter the number of Seconds:";
    cin>>t;
    d = t/86400;
    h = (t-d*86400)/3600;
    m = (t-d*86400-h*3600)/60;
    s = t-d*86400-h*3600-m*60;
    cout<<endl<<t<<" seconds = "<<d<<" days, "<<h<<" hours, "<<m<<" minutes, "<<s<<" seconds"<<endl;
}