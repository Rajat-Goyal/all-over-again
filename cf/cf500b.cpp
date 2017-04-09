#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>

using namespace std;

int N = 2000;
vector<int>par(N);
vector< vector<int> > group(N);

int pfind( int x ){
    if(par[x] == x) return x;
    return par[x] = pfind(par[x]);
}

int pmerge( int x, int y){
    int a = pfind(x);
    int b = pfind(y);
    if(a!=b)par[a] = b;
}

int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    string mat;
    for(int i=0; i<n; i++){ par[i] = i; }
    for(int i=0; i<n; i++){ cin>>arr[i]; }

    for(int i=0;i<n;i++){
        cin>>mat;
        for(int j=0;j<n;j++){
            if(mat[j]=='1'){ pmerge(i,j); }
        }
    }

    for(int i=0;i<n;i++){
        group[pfind(i)].pb(arr[i]);
    }

    for(int i=0;i<n;i++){ sort(group[i].begin(), group[i].end()); }

    vector<int>cnt(n,0);

    for(int i=0;i<n;i++){
        int gid = pfind(i);
        cout<<group[gid][cnt[gid]++]<<" ";
    }
    return 0;
}
