#include<iostream>
using namespace std;
class queue{
    public:
    //using vector
    int *arr;
    int size;
    int front;
    int rear;
    queue(int size){
    this->size =size;
    arr = new int(size);
    front=0;
    rear=0;
    }
    void push(int data){//in push case ,our focus is on space available or not.
        if(rear == size ){//if rear gets equal to size of array ,then it is full
            cout<<"q is full"<<endl;
        }else{
            arr[rear]=data;//rear is always a empty place.
            rear++;
        }

    }
    void pop(){//in case of pop,our focus is on emptyness .
    if(front == rear){
        cout<<"q is empty";
    }else{
        arr[front]=-1;//nothing logical..it 's only change the value that ,is gonna pop...
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
    }

    }
    int getFront(){
        if(front == rear){
            cout<<"q is empty";
            return -1;
        }else{
            return arr[front];
        }
    }
    bool isempty(){
        if(front == rear){
            return true;

        }else{
            return false;
        }
    }
    int getsize(){
        return rear - front;
    }

};
int main(){
    queue q(10);
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);
     cout<<"size of q: "<<q.getsize()<<endl;

    q.pop();
    cout<<"size of q: "<<q.getsize()<<endl;
    cout<<"front element of q: "<<q.getFront()<<endl;
    while(!q.isempty()){
        cout<<q.getFront()<<" ";
        q.pop();
    }



}