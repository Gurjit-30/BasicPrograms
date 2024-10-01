#include<bits/stdc++.h>
using namespace std;
class cre{
    int id;
    string pass;
    public:
    string user;
    cre(int id){
        this->id=id;
        cout<<" id is :"<<id<<endl;

    }
    void set(string pass){
        this->pass=pass;
    }
    string get(){
        return pass;
    }
    };
    int main(){
        cre c1(5);
        c1.user="Guri";
        c1.set("i m a ");
        cout<<"user name :"<<c1.user<<endl;
        cout<<" pass: "<<c1.get();


    }
