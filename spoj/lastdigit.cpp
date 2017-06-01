#include<bits/stdc++.h>
#define lli long long int
#define ull unsigned long long int

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int t,a,res;
    cin>>t;
    ull b;
    while(t--){
        cin>>a>>b;
        if(b==0L){cout<<1<<endl; continue; }
        if(b%4==0)b=4;
        else b=b%4;
        res = ((int)pow(a,b))%10;
        cout<<res<<endl;
    }

    return 0;
}
