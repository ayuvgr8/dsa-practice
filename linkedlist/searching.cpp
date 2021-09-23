#include <iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;
    node(int val){
        data =val;
        next=NULL;
    }
};

void insert(node* &head,int val){
    node* n = new node(val);
    if (head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while (temp->next !=NULL)      
    {
        temp=temp->next;
    }
    temp->next=n;
      
}

bool search(node* head,int key){
 node* temp=head;
 while(temp!=NULL){
     if(temp->data==key)
         return true;
     temp=temp->next; 
 }
   return false;
}


void display(node* head){
    node* temp=head; //iterate krne ke liye
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,90);
    display(head);
    cout<<search(head,77)<<endl;
    

}