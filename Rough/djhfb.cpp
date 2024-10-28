#include<iostream>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // deque<int> d={1,3,3,4,5,6,8,8};
    //check and get index 
//     int t=4;
// if(binary_search(d.begin(),d.end(),t)){
//     auto i=lower_bound(d.begin(),d.end(),t);
//     int index=i-d.begin();
//     cout<<"index"<<index;



// }




//removing duplicate
// sort(d.begin(),d.end());
// auto i=unique(d.begin(),d.end());
// d.erase(i,d.end());
// for(auto i:d){
//     cout<<i<<" ";
// }

    //add two vector(transform function)
    vector<int> a = {1,3,5,7,8};
    vector<int> b = {1,3,5,7,8,4,5,7};
    vector<int> c(b.size());
    transform(b.begin(),b.end(),a.begin(),c.begin(),[](int a,int b){return a+b;});
    for(auto i:c){
        cout<<i<<" ";
    }


}