#include<iostream>
#include<climits>
using namespace std;
void ps(int arr[],int n){
    int maxe=INT_MIN;
    for(int s=0;s<n;s++){
        int sum=0;
        for(int e=s;e<n;e++){
            sum+=arr[e];
            maxe=max(maxe,sum);
            

        }
        cout<<endl;
    }
    cout<<"the maximum sum is: "<<maxe;
    
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

