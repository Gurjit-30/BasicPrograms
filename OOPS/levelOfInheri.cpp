// 1. single level
#include<bits/stdc++.h>
using namespace std;
class inn{
    public:
    int a=5;
    void name(){
        cout<<"namer";

    }
};
class der: public inn{// 1. single level
    public:
    int b=5;
    void add(){
        cout<<"add";

    }
    der(){
        cout<<a<<" ";
        cout<<b<<" ";

    }
};
class der2 : public der{};//mutlilevel inheritance
class der3 : public der ,public der2 {};//multiple inheritance
int main(){
    der d1;
    d1.name();
    d1.add();
    
}