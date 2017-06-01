#include<bits/stdc++.h>
#define pb push_back

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int n,len;
    string str;

    cin>>n;
    while(n!=0){
        cin>>str;
        len = str.length();
        vector< string >vec;

        int pos = 0;
        for(int i=0;i<len;i+=n){
            string next = str.substr(i,n);
            if(pos%2!=0){
                reverse(next.begin(), next.end());
            }
            vec.pb(next);
            pos+=1;
        }
        for(int j=0;j<n;j++){
            for(int i=0;i<pos;i++){
                cout<<vec[i][j];
            }
        }
        cout<<endl;
        cin>>n;
    }
}
