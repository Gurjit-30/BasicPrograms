#include<bits/stdc++.h>
#include<string>
using namespace std;
void tou(char* arr,int n){
    for(int i=0;i<n;i++){
        char ch=arr[i];
        if('a'<=ch<='z'){
            arr[i]=ch-'a'+'A';

        }

    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";

    }


}
int main(){
    char strin[30];
    cin.getline(strin,30);
    int n=strlen(strin);

    tou(strin,n);
    
}