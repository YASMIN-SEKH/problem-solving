//program to print all prime numbers in a given range

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter range from a to b"<<endl;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    
    for(int n=a; n<=b; n++){
        int flag=1;
        for(int i=2; i<=n/2; i++){
            if(n%i==0){
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<n<<endl;
        }
        
    }

}