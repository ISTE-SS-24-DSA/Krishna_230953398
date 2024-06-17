#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    
    vector<int>arrtemp(n);
    for(int b=0;b<n;b++){
        arrtemp[b]=arr[b];
    }
    int s=0;
    for(int k=n-1;k>=0;k--){
        arr[s]=arrtemp[k];
        s++;
    }
    
    for(int a=0;a<n;a++){
        cout<<arr[a]<<" ";
    }
    cout<<endl;
    return 0;
}