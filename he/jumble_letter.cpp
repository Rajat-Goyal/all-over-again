#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    map<char,int>mp;
    mp['A'] = 1; mp['O'] = 1; mp['Y'] = 1; mp['E'] = 1; mp['U'] = 1; mp['I'] = 1;
    while(t--){
        string str;
        cin>>str;
        int len = str.length();
        for(int i=0;i<len;i++){
            if( mp[toupper(str[i])] == 1  )
                continue;
            else {
                cout<<".";
                if( (int)str[i]>=65 && (int)str[i]<=90)
                    cout<<(char)((int)str[i] + 32 );
                else
                    cout<<str[i];
            }

        }
    }
    return 0;
}
