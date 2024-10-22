//cirqueue :after end block, next block will be first block of queue only
//only the circular nature of queue is introduced ,rest everything is same 
//here ,we r gonna start with -1 instead of 0 , so now rear is not empty.
#include<iostream>
using namespace std;
class cirqueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    cirqueue(int size){
        this->size=size;
        arr= new int(size);
        front=-1;
        rear=-1;

    }
    void push(int data){
        //checking for space
        if(front==0 && rear==size-1){
            cout<<"queue is full";
        }else if(front ==-1){//for first element 
            front=rear=0;
            arr[rear]=data;
            

        }else if(rear ==size-1 &&  front !=0)//checking for space if any at starting.because rear is already at end
            rear=0;
            arr[rear]=data;
    }

};