#include<bits/stdc++.h>
using namespace std;
class inn{
    private:
    void pri(){
        cout<<"this is private";
    }
    public:
    void pu(){
        cout<<"this is public ";

    }
    protected:
    void pro(){
        cout<<" this is protected ";

    }
    
    
};
class der: public inn{
    void dee(){
        pu();
    pro();
    }
   
};
class der2: protected inn{
    void deee(){
          pu();
    pro();
        
    }
};
int main(){

    der d1;
    der2 d2;
    // d1.pri(); this gives error because private is not accessed even by derived class
   // d1.dee();
   // d2.deee();



    
}