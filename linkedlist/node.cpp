#include<iostream>
using namespace std;

class node{
    public:
    int data; //variable data (basically data part node ka, jahan value hiogi noide ki)
    node* next; //ye pointer hai // next node ko point kar rha hai to ye type node hoga
    node(int val){
        data=val;
        next=NULL;
    }
};
int main(){
    return 0;

}
// each node contains the link to the next node and some data variables
//