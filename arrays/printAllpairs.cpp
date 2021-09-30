#include<iostream>
using namespace std;

void reverseAllpairs(int arr[],int n){
    //print all the numbers
    for (int i = 0; i < n; i++)
    {
        int x = arr[i];

        for (int  j = i+1 ; j < n; j++)
        {
            /* code */
            int y =arr[j];
            cout<<x <<","<<y <<endl;
        }
        cout<<endl;
        
    }
    
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(int);

    //print all the elements using for each loop
     
    reverseAllpairs(arr,n);

    return 0;
}