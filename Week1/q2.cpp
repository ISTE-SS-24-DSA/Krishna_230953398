#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int lastdigit=0;
    int rev=0;
    while(n>=1){
    lastdigit=n%10;
    rev=rev*10+lastdigit;
    n=n/10;
    }
    cout<<rev;
    return 0;
}