#include<bits/stdc++.h>
#include<string>
using namespace std;
void rev(char* arr,int n){
    for(int s=0,e=n-1;s<e;s++,e--){
        swap(arr[s],arr[e]);
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";

    }

}
int main(){
    char str[39];
    cin.getline(str,39);
    int n=strlen(str);
    rev(str,n);

}
