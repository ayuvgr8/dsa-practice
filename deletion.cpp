#include<iostream>
using namepace std;

class node{
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};


void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if (head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while (temp!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}

void insertAtHead(node* &head,int val){

    node* n= new node(val);
     n->next=head;   //naya node aaya hai jo "n" uske next to hum head pe point kra denge.
     head=n;   // head ko move krke new node "n" pe le aayenge.


}

void display(node* head){
    node* temp=head; //iterate krne ke liye
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

void delete(node* head){
    node* temp=head; //iterate krne ke liye

    while (temp->next->data==val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
}

int main(){

    return 0;
}