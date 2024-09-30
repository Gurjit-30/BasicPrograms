#include<iostream>
#include<string>
using namespace std;
class co{
    string name;
    int age;
    public:
    co(string n,int a){
        age=a;
        name=n;
        cout<<"this function is automatically called once.\n";
    }
    string getter(){

    
    return name;
    }
    


};
int main(){
    co c("Bablu",23);
    cout<<"this function is intentionally called"<<c.getter();
}