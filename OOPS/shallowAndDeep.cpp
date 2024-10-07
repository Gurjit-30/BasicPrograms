#include<bits/stdc++.h>
using namespace std;
class cr{

    string name;
    int a;
    public:
    
    int* age;
    cr(string name ,int a){
        this->name=name;
        this->a;
        age=new int;
        *age =a;

    }
    
};
int main(){
    cr c1("Guri",23);
    cr c2(c1);
    cout<<*c2.age<<endl;//here pointer of c2 is also pointing towards age variable and we can change it;
    *c2.age=13;
    cout<<*c1.age;// value is changed usin g the pointer of c2 
}