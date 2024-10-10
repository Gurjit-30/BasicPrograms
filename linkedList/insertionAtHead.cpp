#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // Node(){
    //     this->data=0;
    //     this->next=NULL;

    // }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    

};
void print(Node* head);
void insertionAtHead(Node* head,int data){
    Node* ins=new Node(data);
    ins->next=head;
    head=ins;
    print(ins);

}
void insertionAtTail(Node* tail,int data){
    Node* neww=new Node(data);
    tail->next=neww;
    tail=neww;
    print(neww);
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* sec =new Node(20);
     Node* thir =new Node(40);
      Node* four =new Node(50);
       Node* five =new Node(45);
       sec->next=thir;
       thir->next=four;
       four->next=five;
       five->next=NULL;
    insertionAtHead(sec,10);
    insertionAtTail(five,80);
    

}