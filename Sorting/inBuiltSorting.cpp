#include<bits/stdc++.h>
using namespace std;
void asc(int arr[],int n){
    sort(arr,arr+n);
    cout<<"ascending order: ";
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void desc(int* arr,int n){
    sort(arr,arr+n,greater<int>());
    cout<<"descending order: ";
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
    asc(arr,n);
    desc(arr,n);

    
}