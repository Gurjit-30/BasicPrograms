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
        return 0;
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

int main(){
    vector<int> v={1,2,4,-1,-1,5,-1,6,-1,7,-1,-1,3,-1,-1};
    node* root=build(v);
    // cout<<root->data;
    cout<<height(root)<<endl;
    cout<<count(root);
    level(root);
    cout<<sum(root);


    
}