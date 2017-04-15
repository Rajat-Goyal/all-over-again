#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    while(n!=0){
        int cnt = 0;
        int fit = n;
        while(fit!=0){
            cnt+=fit*fit;
            fit-=1;
        }
        cout<<cnt<<endl;
        cin>>n;
    }
    return 0;

}
