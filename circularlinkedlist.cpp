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
    void insertattail(int val){
        Node* newnode=new Node(val);
        if(tail==NULL){
            head=tail=newnode;
            tail->next=head;
        }else{
            tail->next=newnode;
            tail=newnode;
            tail->next=head;
        }
        
    }
    void deleteathead(){
        if(head==NULL){
            cout<<"list is empty"<<endl;
            return;
        }else if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }else{
        Node* temp=head;
        head=head->next;
        tail->next=head;

        temp->next=NULL;
        delete temp;
        }

    }
    void deleteattail(){
        if(head==NULL){
            cout<<"list is empty"<<endl;
            return;
        }else if(head==tail){
            delete head;
            head=tail=NULL;
            return;
        }else{
            Node* temp=tail;
            Node* prev=head;
            while(prev->next!=tail){
                prev=prev->next;
            }
                tail=prev;
                prev->next=head;
                temp->next=NULL;
                delete temp;
            
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
     cl.insertattail(4);
    cl.insertattail(5);
    cl.deleteathead();
   cl.deleteattail();
   cl.deleteattail();
    cl.print();
    return 0;
 }