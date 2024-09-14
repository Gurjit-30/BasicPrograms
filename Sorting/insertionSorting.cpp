#include <iostream>
using namespace std;
void is(int* arr,int n){
    for(int i=0;i<n;i++){
        int cur=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>cur){
            swap(arr[prev],arr[prev +1]);
            prev--;
        }
        arr[prev +1]=cur;

    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";

    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    is(arr,n);
}