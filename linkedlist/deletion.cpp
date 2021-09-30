#include<iostream>
using namespace std;

class node{
    public:
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
    while (temp->next!=NULL){
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

void deletion(node* head,int val){
    node* temp=head; //iterate krne ke liye

    while (temp->next->data==val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;   
}

int main(){
     node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,90);
    insertAtTail(head,89);
    display(head);
    deletion(head,4);
    display(head);
    insertAtTail(head,888);
    display(head);
    return 0;
}