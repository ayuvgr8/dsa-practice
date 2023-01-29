#include<iostream>
using namespace std;
using namespace std;

int main(){

    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        cout<<"the entered character is upper case"<<endl;
    }else if(ch>='a' && ch<='z'){
        cout<<"the entered character is lower case"<<endl;
    }else if(ch>='0' && ch<='9'){
        cout<<"the entered character is numeric"<<endl;
    }

}    

    