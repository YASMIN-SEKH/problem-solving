//Program to find sum of natural numbers till n.

#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"enter number: ";
    cin>>n;
    
    int sum=0;
    
    for(int i=1; i<=n; i++)
    {
        cout<<i<<"+";
        sum = sum+i;

    }
    cout<<"0="<<sum;

    return 0;

}