//Program to display multiplication table upto 10.

#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    int mul=1;
    for(int i=1; i<=10; i++)
    {
        mul=n*i;
        cout<<n<<"*"<<i<<"="<<mul<<"\n";

    }

    return 0;

}