//lab5ex3.cpp
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main(){
    const string vowel="aeiou";

    cout<<"Enter word (q to quit):\n";
    int nVowel = 0;
    int nConsonant = 0;
    int nOther = 0;
    char word[30];

    while(cin>>word){
        if(isalpha(word[0])){
            if(strlen(word)==1&&word[0]=='q')
                break;
            char x = tolower(word[0]);
            if(vowel.find(x)!=vowel.npos)
                nVowel++;
            else
                nConsonant++;
        }else
            nOther++;
    }

    cout<<nVowel<<" words beginning with vowels\n"<<nConsonant<<" words beginning with consonats\n"<<nOther<<" others"<<endl;

    return 0;
}
