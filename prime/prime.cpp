//program to check if a given number is prime or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number to check if it is prime or not: ";
    cin>>n;

    int flag=1; //initially number is prime

    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag=0;
            break;
        }


    }

    if(flag){
        cout<<n<<" prime"<<endl;
    }

    else{
        cout<<n<<" non-prime"<<endl;
    }


    return 0;
}
