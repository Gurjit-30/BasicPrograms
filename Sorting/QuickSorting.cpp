#include<iostream>
#include<vector>
using namespace std;
void me(int arr[],int s,int m,int e){
    vector<int> temp;
    int i=s;
    int j=m+1;
    while(i<=m && j<=e){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i++]);
        }else{
             temp.push_back(arr[j++]);

        }
    }
    while(i<=m){
        temp.push_back(arr[i++]);

    }
    while(j<=e){
        temp.push_back(arr[j++]);
    }
    for(int id=s,x=0;id<=e;id++){
        arr[id]=temp[x++];
    }




}
void mergesort(int arr[],int s ,int e){
    //base case
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    me(arr,s,mid,e);

}

int main(){
    int arr[5]={2,5,1,6,9};
    int n=5;
    mergesort(arr,0,n-1);
for(auto i:arr){
    cout<<i<<" ";
}

}