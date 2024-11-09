#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left ;
    node* right;
    node(int data){
        this->data =data ;
        left=right=NULL;
    }

};
node* insert(node* root,int val){
    if(root==NULL){//creates a node at null 
        root=new node(val);
        return root;

    }
    if(val<root->data){
        root->left=insert(root->left,val);

    }else{
        root->right=insert(root->right,val);
    }
    return root;
}
node* build(int *arr,int n){//returns root node of binary tree
    node* root=NULL;
    for(int i=0;i<n;i++){//this loop is to insert the values in nodes
        root=insert(root,arr[i]);
    }
    return root;//it will always point to root of only 

}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool search(node* root,int key){
    
    if(root==NULL){
        return false;

    }
    if(root->data == key){return true;}
    if(root->data>key){
        return search(root->left,key);
    }else{
        return search(root->right,key);
    }

}
node* IS(node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;

}
node* delnode(node* root,int val){
    //1.searching for node which need to be deleted
    if(root==NULL){
        return NULL;

    }
    if(val < root->data){
        root->left=delnode(root->left,val);

    }else if(val > root->data ){
        root->right=delnode(root->right,val);

    }else{
        //found the node..
        //2.classify them 
        //a.node with 0 child
        if(root->left ==NULL && root->right==NULL){
            delete root;
            return NULL;//simply removing node and passing NULL to parent
        }
        //b.node with 1 child
        if(root->left==NULL || root->right==NULL){
            return root->left==NULL ? root->right : root->left;
        }
        //c.node with 2 child 
        node* iss=IS(root->right);
        root->data=iss->data;
        root->right=delnode(root->right,iss->data);
        return root;
    }
    return root;
    

}
int main(){
    int arr[6]={5,1,3,4,2,7};
    node* root=build(arr,6);
    inorder(root);
    cout<<endl;
    delnode(root,3);
    inorder(root);
    //passing array and size
}


