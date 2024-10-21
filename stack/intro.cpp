#include <iostream>
#include<stack>
using namespace std;
//stack is a data structure type that is stroed in lifo order.
//example a collection of plates .or a gun magzine
//s.push(data) : used to add in stack 
//s.pop(): top most element will be deleted
//s.top():return the top most element
//s.empty() returns true if stack empty
//s.size(): returns number of element in stack
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    //remove
    st.pop();
    //top element
    cout<<st.top()<<" is on top"<<endl;
    //size
    cout<<st.size()<<" is the size "<<endl;
    //empty
    if(st.empty()){
        cout<<"is empty\n";
    }else{
        cout<<"not empty\n";
    }
    // for(int i=1;i<st.size();i++){
    //     cout<<st.top();
    //     st.pop();
    // }
    //no indexing in stacks
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    //stack automatically reverse the order









}