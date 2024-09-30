#include<bits/stdc++.h>
#include<string>
#include<cstring>
using namespace std;
void ana(char* str1,char* str2){
    int flag =0;
    int n1=strlen(str1);
    int n2=strlen(str2);


    sort(str1,str1+n1);
    sort(str2,str2+n2);
    
    for(int i=0;i<max(n1,n2);i++){

    
    if(str1[i]==str2[i]){
        flag++;
    }

    }
    if(flag==max(n1,n2)){
        cout<<"it is a anagram";
    }
    else{
        cout<<"it is not anagram";
    }

    }




int main(){
   char str1[30],str2[30];
   cin.getline(str1,30);
   cin.getline(str2,30);

    ana(str1,str2);



    }