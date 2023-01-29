#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){    //constructor bana ke node banayenge to val daalni padegi
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val){
    
    node* n = new node(val);
    //"n" naam ka node ban jayega (data field mai val aa jayegi or next pointewr mai NULL aa jayega)

    // Ab basically traverse karna hai linkedlist or insert karte rehna hai last node of lkinkedlist takes
    //iterator raklhenge jo start se end tk traverse karega 

    //base case 
    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head; //
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtHead(node* &head,int val){

    node* n= new node(val);
     n->next=head;   //naya node aaya hai jo "n" uske next to hum head pe point kra denge.
     head=n;   // head ko move krke new node "n" pe le aayenge.


}

bool search(node* head,int key){
 node* temp=head;
 while(temp!=NULL){
     if(temp->data==key){ 
         return true;
     }
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
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,90);
    display(head);
    cout<<search(head,4);<<endl;
    

    
    return 0;

}