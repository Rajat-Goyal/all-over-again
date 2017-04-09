#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n && i<=t;){
        if(i==t){
            cout<<"YES"<<endl;
            return 0;
        }
        i+=arr[i];
    }
    cout<<"NO"<<endl;
    return 0;
}
