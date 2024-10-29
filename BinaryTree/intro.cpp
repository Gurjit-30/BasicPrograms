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
#include<queue>
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
    void preorder (node* root) {
        if(root==NULL){
            return;
            }
        cout<< root->data;
        preorder(root->left);
        preorder(root->right);
    }
    void level(node* root){
        if(root ==NULL){
            return;
        }

        queue<node*> q ;
        q.push(root);
        q.push(NULL);
    while(!q.empty()){

        node * curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<endl;
            if(q.empty()){
                break;
            }
            q.push(NULL);
        }else{
        cout<<curr->data<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }

        }
    }


       
       

    }
    int height(node* root){
    if(root==NULL){
        return 0;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);
    int cur=max(leftht,rightht)+1;
    return cur;
}
    int main(){
        vector<int> v ={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
       node* root= build(v);
    //    cout<<"root="<<root->data<<endl;
    //    preorder(root);
    level(root);
    cout<<height(root);
    }
