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
int height(node* root){
    if(root==NULL){
        return 0;//if it is for nodes ,but if it is edges is will be -1
    }
    int lefth=height(root->left);
    int righth=height(root->right);
    int curr=max(lefth,righth)+1;
    return curr;
}
static int in=-1;
node* build(vector<int> v){
    in++;
    if(v[in]==-1){
        return NULL;
    }
    node* newn=new node(v[in]);
     newn->left=build(v);
     newn->right=build(v);
      return newn;


}
int count(node* root){
    if(root == NULL){
        return 0;
    }
    int lftc=count(root->left);
    int rght=count(root->right);
    return lftc+rght+1;
}
void level(node* root){
    if(root== NULL){
        return;

    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* curr=q.front();
        q.pop();
        
        if(curr==NULL){
            cout<<endl;
            if(q.empty()){
            break;
        }
            q.push(NULL);
        }else{
        cout<<curr->data;
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }

    }
    }

}
int sum(node* root){
    if(root==NULL){
        return 0;

    }
    int lefts=sum(root->left);
    int rights=sum(root->right);
    return lefts+rights+root->data;
}
bool iss(node* root1 ,node* root2){
    //base case
    if(root1==NULL &&root2==NULL){
        return true;

    }else if(root1==NULL || root2 ==NULL){
        return false;
    }
    if(root1->data != root2->data){//to return false if values of nodes does not matches 
        return false;
    }
     return iss(root1->left,root2->left)&&
    iss(root1->right,root2->right);//this function will only return true if both of answer is true
}
bool issubtree(node* r,node* sr){
    //base condition 
    if(r==NULL && sr==NULL){
        return true;


    }else if(r==NULL || sr==NULL){
        return false;

    }
    if(r->data == sr->data){
        //check for identical
        if(iss(r,sr)){
            return true;//to tackle with multiple nodes having same node value.
        }

    }
    int islefts=issubtree(r->left,sr);//storing the result( 0 or 1)in variable ,,returns 1 if found in left side and vice versa
    if(!islefts){//if not found in left ,then only look for right and return value
        
    return issubtree(r->right,sr);
    }
    return true;


}
void kthhelp(node * root, int k ,int curr){
    //base condition 
    if(root ==NULL){
        return;
    }
    
    
    
    
    //this is helper function ,which will perform recursion
    if(curr ==k){//to check if we reached our required level
        cout<<root->data<<" ";
        return;
    }
    //if not equal ,then it will call it's children 
    kthhelp(root->left,k,curr+1);//left
    kthhelp(root->right,k,curr+1);

}
void kthlevel(node* root ,int k){
    kthhelp(root,k,1);
    cout<<endl;


}
void kth(node* root, int k) {
   queue<node*>q;
   q.push(root);
   int level=1;
   while(!q.empty()){
    int size=q.size();
    if(level==k){
        for(int i=0;i<size;i++){
            node* cur=q.front();
            q.pop();
            cout<<cur->data<<" ";

        }
        return;
    }
    for(int i=0;i<size;i++){
        node* cur =q.front();
        q.pop();
        if(cur->left){q.push(cur->left);}
        if(cur->right){
            q.push(cur->right);
        }
    }
    level++;


   }
}




int main(){
    vector<int> v={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* root=build(v);
    // cout<<root->data;
    // cout<<height(root)<<endl;
    // cout<<count(root);
    // level(root);
    // cout<<sum(root);
     node* sr=new node(2);//creating a subroot
    sr->left=new node(4);
     sr->right=new node(5);
    // cout<<issubtree(root,sr);

     kthlevel(root,2);
    
    
}