//when a function call itself  in a function
//base case :when we need to stop ...point at where recusion ends
//in base case return is imp
// work :any action done
//recursive call: calling function
//recursion happens in stack
//recursive call and base case is mandatorary,whereas work is optional
//2 two types of output return : 1)printing while going to base  2)while returning from base
#include<iostream>
#include<string>
using namespace std;





//q1.counting
// void count(int n){
//     if(n==0){
// return;
//     }
    
//     cout<<n<<endl;
//     count(n-1);


// }



// int main(){
//      int n;
//      cin>>n;
//      count(n);
// }

//2.factorial
// int fact(int n){
//     int f=1;
//     if(n==1){
//         return 1;
//     }
    
//     f=n*fact(n-1);
//     return f;
    
// }
// int main(){
//      int n;
//      cin>>n;
//      cout<<fact(n);
// }



//3.fibonacci 
// int fib(int n){
//     if(n==0||n==1){
//         return n;

//     }
//     return fib(n-1)+fib(n-2);
// }
// int main(){
//      int n;
//      cin>>n;
//      cout<<fib(n);
// }

//4.print the string of number
// void print(int n){
//     if(n==0){
//         return;
//     }
//     string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//     int r=0;
//     r=n%10;
//      print(n/10);
//     cout<<arr[r]<<" ";
    
    



// }
// int main(){
//      int n;
//      cin>>n;
//      print(n);
// }



