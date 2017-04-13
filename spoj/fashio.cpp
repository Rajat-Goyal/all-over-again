#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t,n;
    cin>>t;

    while(t--){
        cin>>n;

        vi men(n,0);
        vi women(n,0);
        for(int i=0;i<n;i++) cin>>men[i];
        for(int i=0;i<n;i++) cin>>women[i];

        sort(men.begin(),men.end()); reverse(men.begin(), men.end());
        sort(women.begin(),women.end()); reverse(women.begin(), women.end());

        int ans = 0;
        for(int i=0;i<n;i++){
            ans+=(men[i]*women[i]);
        }

        cout<<ans<<endl;
    }
    return 0;
}
