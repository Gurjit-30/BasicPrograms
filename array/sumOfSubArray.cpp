#include<iostream>
using namespace std;
void ps(int arr[],int n){
    for(int s=0;s<n;s++){
        for(int e=s;e<n;e++){
            int sum=0;
            for(int i=s;i<=e;i++){
                sum+=arr[i];
            }
            cout<<sum<<" ";

        }
        cout<<endl;
    }
    
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];

    for (int i = 0; i < n; i++) {
        
        cin >> arr[i];
    }
    ps(arr,n);
}

