// Binary tree: a non-linear data structure 
#include<iostream>
using namespace std;
class node{
    public:
    int data ;
    node* left;
    node* right;
    node(int data){
        this->data =data;
        this->left=NULL;
         this->right=NULL;

    }
};
node* build(node* root){
    cout<<"enter data for root:"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"enter data for inserting in left of "<<data<<endl;
    root->left = build(root->left);
    cout<<"enter data for inserting in right of "<<data<<endl;
    root->right=build(root->right);
    return root;


}
int main(){
    node* root=NULL;
    root=build();

}