#include<bits/stdc++.h>
using namespace std;
class de{
    int age;
    int* pt=new int ;
    public:
    
    de(int a){
        age=a;
        
        *pt=3;
        cout<<*pt<<" ";
        *pt=age;
        cout<<*pt<<" ";

        cout<<age<<" ";

    }
    ~de(){
        while(pt!=NULL){
            delete pt;
            cout<<pt<<" ";
            pt=NULL;
            cout<<pt<<" ";
            


        }
    }
};
int main(){
    int a;
    cin>>a;
    de d1(a);
}