//Program to check if a triangle is scalene, isosceles or equilateral.

#include <iostream>
using namespace std;
int main(){
    cout<<"enter three sides of the triangle: \n";
    int a,b,c;
    cout<<"enter first side of triangle: ";
    cin>>a;
    cout<<"enter second side of triangle: ";
    cin>>b;
    cout<<"enter third side of triangle: ";
    cin>>c;

    if(a==b&&a==c&&b==c){
        cout<<"the triangle is an equilateral triangle";
    }

    else if((a==b)||(b==c)||(c==a)){
        cout<<"the triangle is an isosceles triangle";
    }

    else{
        cout<<"the triangle is an scalene triangle";
    }


    return 0;

}
