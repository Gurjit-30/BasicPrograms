#include <bits/stdc++.h>
using namespace std;
char re[3000];
void palin(char* re,char* arr,int n);
void rev(char *arr,int n){
     for(int i =0;i<n;i++){
        re[i]=arr[i];
    }

    for(int s=0,e=n-1;s<=e;s++,e--){
        swap(re[s],re[e]);
    }
    palin(re,arr,n);
}
void palin(char* re,char* arr,int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(re[i]==arr[i]){
            c++;
            
        }
    }
    if(c==n){
        cout<<"it is palin";
    }else{
        cout<<"it is not";
    }
}
int main(){
    
    char str[39];
    cin.getline(str,39);
    int n=strlen(str);
    rev(str,n);


}