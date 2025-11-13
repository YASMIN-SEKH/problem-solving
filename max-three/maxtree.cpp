//Program to find maximum among three numbers.

#include <iostream>
using namespace std;

int main(){
    cout<<"enter three numbers\n";
    int n1,n2,n3;
    cout<<"enter first number: ";
    cin>>n1;
    cout<<"enter second number: ";
    cin>>n2;
    cout<<"enter second number: ";
    cin>>n2;

    int max = n1>n2?(n1>3?n1:n3):n2;
    cout<<"maximum number is : "<<max;

    return 0;

}
