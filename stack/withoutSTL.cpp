#include<iostream>
using namespace std;
//stack can be created by using array and linked list
class stack{
    public:
    //creating a array in dynamic memory 
    int *arr;//to point to the array in heap.
    int size;//to tell the size of array..also here size represents size of array ,not number of elements
    int top;//serves as a indexing number 
    stack(int size){
        arr=new int(size);//pointer now points to array of int type with size .
        this->size=size;
        top = -1;//top of empty stack ...not 0 because it is a valid  number and can be a element in stack

    }
    void push(int  data){
        //stack overflow: when stack is full but still u insert 
        //to check for available space in  stack : size-top>1...if false then stack is full
    if(size-top>1){
        //space is available 
        top++;
        arr[top]=data;
    }else{
        cout<<"stack overflow";
    }















    }
    void pop(){
        //stack underflow: when we try to delete an element from empty stack
    if(top == -1){
        cout<<"stack underflow";
    }else{
        top--;
    }
    }
    int getTop(){
        if(top == -1){
        cout<<"stack underflow";
    }else{
        return arr[top];
    }

    }
    int getSize(){
        //returns the number of valid elements in a stack
    return top +1;

    }
    bool isEmpty(){
        if(top == -1){
        return true;
    }else{
        return false;
    }

    }





};
int main(){
    stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    while(!s.isEmpty()){
        cout<<s.getTop()<< " ";
        s.pop();

    }
    cout<<"size of stack"<<s.getSize();




}