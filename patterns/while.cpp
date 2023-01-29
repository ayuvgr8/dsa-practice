#include<iostream>
using namespace std;
 int  main(){
     int n;
      cin >>n;
      int sum=0;
      int i=1; // counter se start karna hai.
      while(i<=n){
        //   cout<<i<<" ";
        //   i=i+1;
       // cout<<sum<<endl;
          sum=sum+i;
          i=i+1;
      }
        cout<<"the value of sum is :"<<sum<<endl;
 }