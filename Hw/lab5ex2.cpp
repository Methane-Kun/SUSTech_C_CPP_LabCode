//lab5ex2.cpp
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string list;
    int a=0;

    cout<<"Enter words(to stop, type the word done):"<<endl;

    while(list.find("done")==list.npos){
        cin>>list;
        a++;
    }

    cout<<"You entered a total of "<<a-1<<" words."<<endl;

    return 0;
}