//find the element in a stack without loosing the upper elements
#include<iostream>
#include<stack>

using namespace std;
void printmi(stack<int> s,int ts){
    //base condition
    if(s.size()==(ts/2) +1){
        cout<<s.top();
        return;
    }
    int temp=s.top();
    s.pop();
    //recursive call
    printmi(s,ts);
    //backtrack
    s.push(temp);

}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    int ts=s.size();
    printmi(s,ts);

}