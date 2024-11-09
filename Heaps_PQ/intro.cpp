#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    //priority queue arranges the elements as per priority or ranks
    //basically of 2 types
    //1.max heap:by default largest
    //2.min heap:by default smallest
    priority_queue<int > p;//uses max heap
    for(int i=0;i<12;i++){
        p.push(i);
    }
    while(!p.empty()){
        cout<<p.top()<<endl;
        p.pop();
    }
    priority_queue<int ,vector<int>,greater<int>> pq;//min heap ....
     for(int i=0;i<12;i++){
        pq.push(i);
    }
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }

}