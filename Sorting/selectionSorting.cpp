#include<iostream>
using namespace std;
void se(int* arr,int n){
    for(int i=0;i<n-1;i++){
        int mi=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mi]){
                mi=j;

            }
        }
        swap(arr[i],arr[mi]);
        

    }
    for(int i=0;i<n;i++){
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
    se(arr,n);
}