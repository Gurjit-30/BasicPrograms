#include<bits/stdc++.h>
using namespace std;
class inn{
    public:
    int a=5;
    void name(){
        cout<<"namer";

    }
};
class der: public inn{
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
int main(){
    der d1;
    d1.name();
    d1.add();
    
}