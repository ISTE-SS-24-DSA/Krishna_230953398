#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    for(auto it=arr.begin();it!=arr.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it=arr.rbegin();it!=arr.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}