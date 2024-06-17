#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr[i]=num;
    }
    int max=arr[0];
    int indmax=0;
    for(int j=0;j<n-1;j++){
        if(arr[j]>max){
            max=arr[j];
            indmax=j;
        }
    }
    cout<<arr[indmax];
    return 0;
}