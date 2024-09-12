#include<iostream>
#include<climits>
using namespace std;
void pro(int *pr,int n){
    int bb[100000];
    bb[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bb[i]=min(bb[i-1],pr[i-1]);
    }
    int p[100000];
    for(int i=1;i<n;i++){
        p[i]=pr[i]-bb[i];
        
    }
    int maxe=INT_MIN;
    
    for(int i=1;i<n;i++){
        
        maxe=max(maxe,p[i]);
       



    }
    cout<<"Maximum profit is :"<<maxe;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pro(arr,n);
}