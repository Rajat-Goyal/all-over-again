#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int n,t;
    cin>>n>>t;
    string str;
    cin>>str;

    for(int times=1;times<=t;times++){
        for(int i=n-1;i>0;i--){
            if(str[i] == 'G' && str[i-1] == 'B'){
                str[i-1]='G';
                str[i]  ='B';
                i--;
            }
        }
    }

    cout<<str<<endl;

    return 0;
}
