#include<bits/stdc++.h>
using namespace std;
void heapify(int i,vector<int> &arr,int n){
    int left =2*i+1;
    int right = 2*i+2;
    int maxi =i;
    if(left<n && arr[left]>arr[maxi]){//to change for desc just chnge the sign 
        maxi=left;

    }
    if(right<n && arr[right]>arr[maxi]){//to change for desc just chnge the sign
        maxi=right;

    }
    if(maxi!=i){
        swap(arr[i],arr[maxi]);
        heapify(maxi,arr,n);
    }

}
void heapsort(vector<int> &arr){
    //step 1 :cretaing maxheap
    int n= arr.size();
    for(int i= (n/2)-1 ;i>=0;i--){
        heapify(i,arr,n);
    }
    //step 2 :taking ele to correct pos
    for (int i =n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(0,arr,i);
    }

}
int main(){
    vector<int> arr={1,4,2,5,3};
    heapsort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

}