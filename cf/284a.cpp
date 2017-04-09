#include<iostream>
#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n,x,l,r;
    cin>>n>>x;
    vi start;
    vi fin;

    for(int i=0;i<n;i++){
        cin>>l>>r;
        start.pb(l);
        fin.pb(r);
    }

    int ptr =1;
    int tot = 0;
    for(int i=0;i<n;i++){
        while((ptr+x) <= start[i]){
            ptr+=x;
        }
        tot+= 1 + (fin[i]-ptr);
        ptr = fin[i]+1;
    }

    cout<<tot<<endl;
    return 0;
}
