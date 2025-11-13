//program to write a simple calculator

#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    char op;

    cout<<"enter two numbers"<<endl;
    cout<<"enter first number: ";
    cin>>n1;
    cout<<"enter second number: ";
    cin>>n2;

    cout<<"enter operand: ";
    cin>>op;

    switch(op){
        case '+':
        cout<<n1+n2<<endl;
        break; 
        case '-':
        cout<<n1-n2<<endl; 
        break;
        case '*':
        cout<<n1*n2<<endl; 
        break;
        case '/':
        cout<<n1/n2<<endl; 
        break;

    }

    return 0;
}