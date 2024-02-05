//Program to find maximum, minimum among two numbers.

#include <iostream>
using namespace std;

int main(){
    cout<<"enter two numbers\n";
    int n1,n2;
    cout<<"enter first number: ";
    cin>>n1;
    cout<<"enter second number: ";
    cin>>n2;

    int max = n1>n2?n1:n2;
    cout<<"maximum number is : "<<max;

    int min = n1<n2?n1:n2;
    cout<<"\nminimum number is : "<<min;



    return 0;

}
