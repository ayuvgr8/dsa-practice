#include<iostream>
using namespace std;

void reversearray(int arr[],int n){
    int s=0;
    int e=n-1;

    while(s < e){
        swap(arr[s],arr[e]);
        s+=1;        // s++;     // this we can also use.
        e-=1;        //e--;
    }

}


int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reversearray(arr,n);  // function is implemented.

    //print the output
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}