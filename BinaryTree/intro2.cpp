#include<iostream>
#include<vector>
using namespace std;
class node{//creation of nodes
    public:
    int data;
    node* left;//pointers to pointer another nodes
    node* right;
    node(int data){
        this->data =data;
        left=right=NULL;

    }


};
node* buildtree(vector<int> nodes){//return the address of root node


    }//function that will a c tually build the tree by joining the nodes
int main(){
    vector<int> nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
}