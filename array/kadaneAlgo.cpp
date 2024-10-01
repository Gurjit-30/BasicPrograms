#include<iostream>
#include<climits>
using namespace std;
void kd(int *arr,int n){
    int s=0;
    int maxe=INT_MIN;
    for(int i=0;i<n;i++){
        s+=arr[i];
        maxe=max(maxe,s);
        if(s<0){
            s=0;
        }

    }
    cout<<"maximum is : "<<s;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    kd(arr,n);
}