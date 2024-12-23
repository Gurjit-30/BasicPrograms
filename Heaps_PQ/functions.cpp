#include<iostream>
#include<vector>
using namespace std;
class heap{
    vector<int>v;
    public:
    void push(int val){
        v.push_back(val);
        //fix heap
        int x=v.size()-1;//inserting at end which is child index
        int pare=(x-1)/2;
        while(pare >= 0 && v[x]>v[pare] ){
            swap(v[x],v[pare]);
            x=pare;
            pare=(x-1)/2;


        }
    }
    void heapify(int i){
        if(i>= v.size()){
            return;
        }
        int l=2*i+1;
        int r=2*i+2;
        int maxi=i;
        if(l<v.size()&& v[l]>v[maxi]){
            maxi=l;
        }
        if(r<v.size()&& v[r]>v[maxi]){
            maxi=r;
        }
        swap(i,maxi);
        if(maxi!=i){
            heapify(maxi);
        }

        
    }
    void pop(){
        swap(v[0],v[v.size()-1]);
        v.pop_back();
        heapify(0);
    }

};
int main(){
    heap h;
    h.push(10);
    h.push(28);
}