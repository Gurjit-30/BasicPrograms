#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Gurjit singh";
    cout<<str;
    str="grrrr";
    cout<<str;
    string ss;
    getline(cin,ss);
    cout<<ss;


    for(int i=0;i<str.length();i++){
        cout<<str[i]<<endl;
    }
    cout<<"\n";
}