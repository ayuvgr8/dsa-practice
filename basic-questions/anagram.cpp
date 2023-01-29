#include<iostream>
using namespace std;

bool isAnagram(string A,string B){

    int n1=A.length();
    int n2=B.length();
    if(n1!=n2)
        return false;
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    for(int i=0;i<=n1;i++){ 
        if(A[i]!=B[i])
        return cout<<"false"<<endl;
    }
    return cout<<"true"<<endl;
}

int main(){
    string s1= "ayd";
    string s2= "dad";
    isAnagram(s1,s2);
    return 0;
}