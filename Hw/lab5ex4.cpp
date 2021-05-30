//lab5ex4.cpp
#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>
using namespace std;

int main(){
    char input[50];
    char output[50];
    char output2[50];
    int c=0;
    string a,b;
    cout<<"Please input a string:";
    cin.getline(input,60);
    
    for (int i = 0; i < strlen(input); i++){
        if (!ispunct(input[i])&&!isdigit(input[i])){
            output[c] = input[i];
            c++;
        }
    }
    for (int i = 0; i < strlen(output); i++){   
            output2[i]=toupper(output[i]);
    }
    
    ofstream o1;
    ofstream o2;
    o1.open("f1.txt");
    o2.open("f2.txt");

    if(o1.is_open()){
        o1<<output;
        o1.close();
    }
    if(o2.is_open()){
        o2<<output2;
        o2.close();
    }

    ifstream i1;
    ifstream i2;
    i1.open("f1.txt");
    i2.open("f2.txt");
    cout<<"\n\nThe contents of f1.txt :";
    while(!i1.eof()){
        getline(i1,a);
        cout<<a<<endl;
    }
    i1.close();
    cout<<"\n\nThe contents of f2.txt :";
    while(!i2.eof()){
        getline(i2,b);
        cout<<b<<endl;
    }
    i2.close();

    return 0;
}