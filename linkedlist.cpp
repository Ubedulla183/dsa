#include<iostream>

using namespace std;

class Node{
    public:
           int data;

           Node* next;

           Node(int val){
            data=val;
            next=NULL;

        }
};
class list{
    Node* head;
    Node* tail;
    public:
    list(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
            return;
        }else{
            newnode->next=head;
            head=newnode;
        }

    }
    void push_back(int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }


    }
    void pop_front(){
        if(head==NULL){

            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

    }
    void pop_back(){
        if(head==NULL){
            cout<<"list  is empty"<<endl;
            return;
        }Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;

    }
    void print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

};
int main(){
    list l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.push_back(40);
    l.push_back(50);
    l.pop_front();  
    l.pop_back();
    l.pop_back();
    l.pop_front();
     l.print();
    return 0;
}