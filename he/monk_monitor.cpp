#include<bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    string str; int k;
    vector<string> vec;

    cin>>str>>k;

    int len = str.length();
    for(int i=0;i<len;i++){
        vec.pb(str.substr(i));
    }
    sort(vec.begin(), vec.end());

    cout<<vec[k-1]<<endl;

    return 0;
}
