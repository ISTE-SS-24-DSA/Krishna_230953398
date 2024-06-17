#include<bits/stdc++.h>
using namespace std;

int main(){
    //space
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            cout<<" ";
        }
        //star
        for(int j=2*i+1;j>=1;j--){
            cout<<"*";
        }
        //space
        for(int j=5;j>i;j--){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}