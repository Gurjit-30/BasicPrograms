#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data ){
        this->data =data;
        left=right=NULL;
    }

     
};
static int id=-1;
node* build(vector<int> v){
    id++;
    if(v[id]==-1){
        return NULL;
    }
    
    node* curr=new node(v[id]);
    curr->left=build(v);
    curr->right=build(v);
     return curr;


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
void topview(node* root){
    //we will be using horizontal lines where root has hd=x(usually 0 for root) ,left side hd=x-1,right side hd x+1
    //it will use BFS 
    queue<pair<node*,int>>q;//it will be like (node,hd)
    map<int, int> m;//it will be like (key ,value)
    q.push(make_pair(root,0));//we have pushed a single unit of node as root and hd of root as 0
    while(!q.empty()){
        pair<node*,int> curr=q.front();
        q.pop();
        node* currnode=curr.first;//passing node value 
        int currhd=curr.second;
        if(m.count(currhd)==0){//checking for first time of hd
            m[currhd]=currnode->data;//inserting value of data to hd ,which is a key
        }
        if(currnode->left!=NULL){
            q.push(make_pair(currnode->left,currhd-1));
        }
        if(currnode->right!=NULL){
            q.push(make_pair(currnode->right,currhd+1));
        }
       

    }
     for(auto i:m){
            cout<<i.second<<" ";
        }
        cout<<endl;

}
int main(){
    vector<int> v={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    node* root = build(v);
    node* sr=new node(2);//creating a subroot
    sr->left=new node(4);
     sr->right=new node(5);
    //  cout<<issubtree(root,sr);
    // cout<<root->data;
    topview(root);

}