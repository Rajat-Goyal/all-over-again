#include<bits/stdc++.h>
#define lli long long int
using namespace std;
map<lli,lli>dp;

lli coin( lli n ){
    if(n==0)return 0;

    if(dp[n]!=0)return dp[n];

    dp[n] = max(n, (coin(n/2) + coin(n/3) + coin(n/4)) );
    return dp[n];
}

int main(){
    ios::sync_with_stdio(false);
    int n;
    lli res;
    while(cin>>n){
        res = n;
        res = max(res, coin(n));
        cout<<res<<endl;
    }
    return 0;
}
