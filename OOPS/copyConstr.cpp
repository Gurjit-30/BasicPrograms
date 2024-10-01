#include<bits/stdc++.h>
using namespace std;
class cr{
    int id;
    string pass;
    public:
    string name;
    cr(string name){
        this->name=name;
        cout<<" id is :"<<name<<endl;

    }
};
int main(){
    cr c1("guri");
    cr c2(c1);
    cout<<c2.name;

}