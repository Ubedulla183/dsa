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
   void pop_front(){
    if(head==NULL){
        cout<<"dll is empty"<<endl;
        return;
    }
    Node* temp=head;
    head=head->next;
    if(head!=NULL){
        head->prev=NULL;
    }
    temp->next=NULL;
    delete temp;
   }
   void pop_back(){
    if(head==NULL){
        cout<<"dll is mepty"<<endl;
        return;
    }
    Node* temp=tail;
    tail=tail->prev;
    if(tail!=NULL){
        tail->next = NULL;
    }
    temp->prev=NULL;
    delete temp;
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
    dl.push_front(5);
    dl.push_front(20);
    dl.push_front(30);
    dl.push_front(40);
    dl.push_back(50);

    dl.pop_front();
    dl.pop_front();
    dl.pop_back();
    dl.pop_back();
    dl.print();

    return 0;
}