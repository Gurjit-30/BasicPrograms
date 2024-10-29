// // Binary tree: a non-linear data structure 
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data ;
//     node* left;
//     node* right;
//     node(int data){
//         this->data =data;
//         this->left=NULL;
//          this->right=NULL;

//     }
// };
// node* build(node* root){
//     cout<<"enter data for root:"<<endl;
//     int data;
//     cin>>data;
//     root=new node(data);
//     if(data == -1){
//         return NULL;
//     }
//     cout<<"enter data for inserting in left of "<<data<<endl;
//     root->left = build(root->left);
//     cout<<"enter data for inserting in right of "<<data<<endl;
//     root->right=build(root->right);
//     return root;


// }
// int main(){
//     node* root=NULL;
//     root=build();

//}
#include<iostream>
#include<vector>
using namespace std;
class node{//make a node which will have 3 parts : data ,pointer to left ,pointer to right
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;//will be called to set data in the node
        left=right=NULL;

    
    }
};
static int in = -1;//to traverse the vector 
    
    node* build(vector<int> v){
        in++;
        if(v[in]==-1){
            return NULL;//will establish connection with prev node
        }
        node* curr=new node(v[in]);//just a node is created with data(v[in]) 
        curr->left=build(v);//returns root of left subtree as per the each node
        curr->right=build(v);//same as left 

        return curr;//this return the present node to prev node ,thus establishing connection



    }
    void preorder (node* root) {//traversals 
        if(root==NULL){
            return;
            }
        cout<<"preorder " <<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    void inorder( node* root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    void postorder(node* root){
        if(root==NULL){
            return;

        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }

    int main(){
        vector<int> v ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
       node* root= build(v);
        cout<<root->data<<endl;
    //    preorder(root);
    //    inorder(root);
       postorder(root);
    }
