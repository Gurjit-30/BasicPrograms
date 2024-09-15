#include<bits/stdc++.h>


using namespace std;
void cs(int* arr,int n){
    int f[10000]={0};
    int mi=INT_MAX,ma=INT_MIN;
    for(int i=0;i<n;i++){
        f[arr[i]]++;
        mi=min(mi,arr[i]);
        ma=max(ma,arr[i]);

    }
    for(int i=mi, j=0;i<=ma;i++){
        while(f[i]>0){
            arr[j++]=i;
            f[i]--;
        }

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
    cs(arr,n);
}
