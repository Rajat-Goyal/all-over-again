#include<bits/stdc++.h>

using namespace std;

int zee( int n){
    int zeros =0, m=5;
    while( (n/m) >0 ){
        zeros += n/m;
        m*=5;
    }
    return zeros;
}

int main(){
    ios::sync_with_stdio(false);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<zee(n)<<endl;
    }
    return 0;

}
