#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=2;

    while (i<n){
                // divide ho gya 
        if(n%i==0){
            cout<<"is not prime for "<<i<<endl;
        }else{
            cout<<"is prime for "<<i<<endl;
        }
        i=i+1;

    }

    return 0;
}