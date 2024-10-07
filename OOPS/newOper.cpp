#include<bits/stdc++.h>
using namespace std;
class new1{
    int age;
    int* pt=new int;//new will assign dynamic memory ...it is just like declartion taken to next level
    public:
    new1(int a){
        age=a;
        *pt=age;
        cout<<age<<" ";
        cout<<pt<<" ";
        cout<<*pt;
    }


};
int main(){
    int a;
    cin>>a;
    new1 n1(a);
}