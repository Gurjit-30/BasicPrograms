#include<iostream>
#include<climits>
using namespace std;
void tr(int *arr,int n){
    int lm[10000];
    lm[0]=INT_MIN;
    
    for(int i=1;i<n;i++){
        lm[i]=max(lm[i-1],arr[i-1]);
        
    }
    int rm[10000];
    rm[n-1]=INT_MIN;
    for(int i=n-2;i>=0;i--){
        rm[i]=max(rm[i+1],arr[i+1]);
      

    }
    int m[10000];
    int w[1000];
    int s=0;
    for(int i=0;i<n;i++){
        m[i]=min(lm[i],rm[i]);
        
        

       
    }
    for(int i=1;i<n-1;i++){
        w[i]=m[i]-arr[i];
        if(w[i]>0){

        
        s+=w[i];
        }
    }
    cout<<"Finally the answer is: "<<s;

    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    tr(arr,n);
}