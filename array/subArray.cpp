#include<iostream>
using namespace std;
void ps(char arr[],int n){
    for(int s=0;s<n;s++){
        for(int e=s;e<n;e++){
            for(int i=s;i<=e;i++){
                cout<<arr[i];
            }
            cout<<" ";

        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    char arr[n];

    for (int i = 0; i < n; i++) {
        
        cin >> arr[i];
    }
    ps(arr,n);
}

