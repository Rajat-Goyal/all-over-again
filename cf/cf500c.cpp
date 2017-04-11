#include<bits/stdc++.h>
#define pb push_back
#define vi vector<int>


using namespace std;

int main(){
    ios::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    vi w(n,0);
    vi b(m,0);
    vi init;
    map<int,int>mark;

    for(int i=0;i<n;i++){ cin>>w[i]; }
    for(int i=0;i<m;i++){ cin>>b[i]; }

    for(int i=0;i<m;i++){
        if(mark[b[i]] == 1)continue;
        mark[b[i]]=1;
        init.pb(b[i]);
    }

    int len = init.size();

    int tot=0;

    //cout<<len<<endl;

    //for(int i =0;i<len;i++){cout<<init[i]<<" ";} cout<<endl;

    for(int i=0;i<m;i++){
        for(int j=0;j<len;j++){
            if(b[i]==init[j]){
                for(int k = j; k>0; k--){
                    init[k]=init[k-1];
                }
                init[0]=b[i];
                //for(int ii =0;ii<len;ii++){cout<<init[ii]<<" ";} cout<<endl;
                break;
            }
            //cout<<"adding "<<init[j]<<endl;
            tot+=w[init[j]-1];
        }
    }

    cout<<tot<<endl;
    return 0;
}
