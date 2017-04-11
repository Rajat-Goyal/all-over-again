#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x!=y && x-2!=y)cout<<"No Number"<<endl;
        else if(x%2==0)cout<<x+y<<endl;
        else cout<<x+y-1<<endl;
    }
    return 0;
}
