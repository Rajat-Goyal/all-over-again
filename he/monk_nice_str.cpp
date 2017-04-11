#include<bits/stdc++.h>
#define pb push_back

using namespace std;

vector<string> vec;
vector<int> score;
int check( int x){
    int cnt=0;
    for(int i=0;i<x;i++){
        if(vec[i]<vec[x])cnt+=1;
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);

    int n;
    cin>>n;
    string str;
    for(int i=0;i<n;i++){
        cin>>str;
        vec.pb(str);
        score.pb(check(i));
    }
    for(int i=0;i<n;i++){
        cout<<score[i]<<endl;
    }
    return 0;
}
