#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n; string str;
    cin>>n;
    cin>>str;
    int cnt = 0;

    for(int i=1; i<n; i++){
        if(str[i] == str[i-1])cnt+=1;
    }

    cout<<cnt<<endl;
    return 0;

}
