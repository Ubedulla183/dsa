#include<iostream>
using namespace std;
class Node{
    public:
           int data;
           Node* prev;
           Node* next;

           Node(int val){
            data=val;
            prev=next=NULL;
           }
};
class doublylist{
    Node* head;
    
    Node* tail;

    public:
           doublylist(){
            head=tail=NULL;
           }
    void push_front(int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=tail=newnode;
    }else{
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
    }
   }
   void push_back(int val){
    Node* newnode=new Node(val);

    if(head==NULL){
        head=tail=newnode;
    }else{
        newnode->prev=tail;
        tail->next=newnode;
        
        tail=newnode;
    }

   }
   void print(){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" <=>";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

   }
};

int main(){
    doublylist dl;
    dl.push_front(10);
    dl.push_front(20);
    dl.push_front(30);
    dl.push_front(40);
    dl.push_back(50);

    dl.print();

    return 0;
}