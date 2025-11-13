//a program to find whether an alphabet is a vowel or a consonant.

#include<iostream>
using namespace std;

int main(){
    char a;
    cout<<"enter a single character to check whether it is a vowel or a consonant: ";
    cin>>a;

    switch(a){
        case 'a' :
        cout<<"vowel"<<endl;
        break;
        case 'e' :
        cout<<"vowel"<<endl;
        break;
        case 'i' :
        cout<<"vowel"<<endl;
        break;
        case 'o' :
        cout<<"vowel"<<endl;
        break;
        case 'u' :
        cout<<"vowel"<<endl;
        break;
        default :
        cout<<"consonant"<<endl;
        break;
    }
    return 0;

}