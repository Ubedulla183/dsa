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
};

int main(){
    doublylist dl;
    return 0;
}