#include<iostream>
#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>
#define mp make_pair
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    map<string,string>dict;
    string prof,you;
    for(int i=0;i<m;i++){
        cin>>prof>>you;
        if(prof.length() > you.length()){
            dict[prof]=you;
        }
        else{
            dict[prof]=prof;
        }
    }
    string ans ="";
    for(int i=0;i<n;i++){
        cin>>prof;
        ans += dict[prof];
        ans += " ";
    }
    cout<<ans<<endl;
    return 0;
}
