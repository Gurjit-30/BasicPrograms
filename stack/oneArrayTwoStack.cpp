//making  2 stacks in 1 array 
#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int size ;
    int top1;//different tops for different arrays
    int top2;
    stack(int size){
        arr=new int(size);//this will point to arr's 1 segement ....name is not given here to array
        this->size =size;
        top1=-1;
        top2=size;
    
    }
    void push1(int data){
        //firstly check for space ...
        if(top2-top1 == 1){
            cout<<"stack1 overflow";

        }else{
            top1++;
            arr[top1]=data;
        }

    }
    void pop1(){
        if(top1==-1){
            cout<<"stack underflow";

        }else{
            top1--;
        }


    }
    void push2(int data){
        if(top2-top1 == 1){
            cout<<"stack2 overflow";

        }else{
            top2--;
            arr[top2]=data;
        }


    }
    void pop2(){
        if(top2==size){
            cout<<"stack underflow";

        }else{
            top2++;
        }



    }

};
int main(){
    stack s(9);
    s.push1(10);
     s.push1(20);
      s.push1(30);
       s.push1(40);
       s.push2(50);
       s.push2(60);
       //rest all is printing
    
}