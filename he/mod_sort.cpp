#include<bits/stdc++.h>

using namespace std;

int n,k;
vector<int>vec(100000,0);

bool cmp(int a, int b){
    if(a%k < b%k) return true;
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin>>n>>k;
    vector<int>vec(n,0);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    stable_sort(vec.begin(), vec.end(), cmp );

    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}
