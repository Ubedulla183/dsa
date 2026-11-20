#include<iostream>
using namespace std;
 class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next=NULL;
    }
 };
 class circularlist{
    Node* head;
    Node* tail;
    public:
    circularlist(){
        head =tail=NULL;
    }
    void insertathead(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            tail->next = head;
        }else{
            newnode->next=head;
            head=newnode;
            tail->next=head;
        }
    }
    void print(){
        if(head==NULL){
            cout<<"circularlist is empty"<<endl;
            return;
        }
        cout<<head->data<<" ->";
        Node* temp=head->next;
        while(temp != head){
            cout<<temp->data<<" ->";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
 };
 int main(){
    circularlist cl;
    cl.insertathead(1);
    cl.insertathead(2);
    cl.insertathead(3);
    cl.print();
    return 0;
 }