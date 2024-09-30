#include<iostream>
#include<string>
using namespace std;
int main(){
    string de;
    getline(cin,de);
    cout<<de.length();
    cout<<de.substr(3,4);
    cout<<de.find("guri",9);
    


}