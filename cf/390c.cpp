#include<iostream>
#include<bits/stdc++.h>
#define mp make_pair
#define ss pair<string,string>

using nmespace std;

map <string,int> names;
int n,t,m;
string msgs[101];

vector<ss> clean(){
    string str;
    vector<ss> result;
    for(int i=0;i<m;i++){
        str = msgs[i];
        pos = str.find(":");
        result.pb(mp(str.substr(0,pos), str.substr(pos+1)));
    }
}

void take_inp(){
    cin>>n;
    names.clear();
    string name;
    for(int i=0;i<n;i++){
        cin>>name;
        names[name]=0;
    }
    cin>m;
    string tmp;
    for(int i=0;i<m;i++){
        cin>>tmp;
        msgs[i]=tmp;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin>>t;
    while(t--){
        take_inp();
        clean(msgs);
    }
    return 0;
}

