#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* add;
   
    node(int val){
        data =val;
        add=NULL;
    }

};
class ll{
    node* head;
    node* tail;
    public:
    ll(){
        head=NULL;
        tail=NULL;

    }
    void pushf(int val){
        node* n=new node(val);
        if(head==NULL){
            head=tail=n;

        }else{
            n->add =head;
            head=n;

 
        }

    }
    void pushb(int val){
        node* n=new node(val);
        if(head==NULL){
            head=tail=n;

        }else{
            tail->add=n;
            tail=n;

        }
    }
    void print(){
        node* t= head;
        while(t!=NULL){
            cout<<t->data<<"->";
            t=t->add;
        }
        cout<<endl;

}
void middle(int val ,int p){
    node* n=new node(val);
    node* temp=head;

    for(int i=0;i<p-1;i++){
        temp=temp->add;
    }
    n->add=temp->add;
    temp->add=n;
}

};
int main(){
    ll l1;
    l1.pushf(3);
    l1.pushf(2);
    l1.pushf(1);
    l1.pushb(4);
    l1.print();
    l1.middle(200,3);
    l1.print();

}