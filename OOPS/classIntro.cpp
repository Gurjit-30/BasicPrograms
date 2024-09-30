#include<iostream>
using namespace std;
class cal{
    int l;
    int b;
    int a;
    //setters
    public:
    void getpara(int length,int breadth){
        l=length;
        b=breadth;

    }
    void area(){
        a=l*b;


    }
    //getter
    int dis(){
        return a;
    }



};
int main(){
    cal c1;
    int q,w;
    cin>>q>>w;
    c1.getpara(q,w);
    c1.area();
    cout<<c1.dis();


}