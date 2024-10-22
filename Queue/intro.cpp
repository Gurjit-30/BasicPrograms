//QUEUE:data structure that follows FIFO
//EXAMPLE :atm line
//insertion only at rear(backside)&& removal only from front
//q.push(data):to insert data at rear
//q.size(): to get size the size of queue.
//q.pop(); to delete the element from front
//q.empty(): checks whether queue is empty
//q.front(): returns the front element of queue



//deque(doubly edged queue ):a queue in which we can add and delete from both sides
//pushRear():
//pushfront():
//popfront():
//poprear();

#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;//creation of queue 
    //insertion
    q.push(10);
     q.push(20);
      q.push(30);
       q.push(40);
    //removal 
    q.pop();//removes 1 st element
    //size 
    cout<<"size of queue "<<q.size();
    //front
    cout<<" front element "<<q.front();








}