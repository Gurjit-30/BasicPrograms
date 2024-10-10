#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;//creation  of data part 
    Node* next;//node type pointer
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data ){
        this->data=data;
        this->next=NULL;

    }


};
void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}

int main(){
    Node* head=new Node(12);//allocates dynamic memory to the object of Node class...a kind of data type
    //create a node 
    Node* first =new Node(25);
    Node* second =new Node(65);
    Node* third =new Node(5);
    Node* fourth =new Node();
    first->next=second;//this set the value of next in the node
    second->next=third;//second node points to third node
    third->next=fourth;
    fourth->next=NULL;
    print(first);




}