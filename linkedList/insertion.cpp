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
   if(head==NULL){//if ll is empty then head=tail=null
    Node* newNode=new Node(data);
    head=newNode;
    //tail= newNode;
    return;
   }
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
void insertionAtAny(int data ,int pos ,Node* head,Node* tail){
    if(head==NULL){
        Node* nee=new Node(data);
        head=nee;
        tail=nee;
        return;    }
        Node* newn=new Node(data);
        Node* temp =head;
        for(int i=0;i<pos-1;i++){
            temp=temp->next;


        }
        newn ->next=temp->next;
        temp->next=newn;

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